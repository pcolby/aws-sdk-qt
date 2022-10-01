// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANGESETRESPONSE_H
#define QTAWS_UPDATECHANGESETRESPONSE_H

#include "finspacedataresponse.h"
#include "updatechangesetrequest.h"

namespace QtAws {
namespace FinspaceData {

class UpdateChangesetResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT UpdateChangesetResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    UpdateChangesetResponse(const UpdateChangesetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateChangesetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChangesetResponse)
    Q_DISABLE_COPY(UpdateChangesetResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
