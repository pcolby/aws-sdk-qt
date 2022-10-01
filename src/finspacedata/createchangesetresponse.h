// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANGESETRESPONSE_H
#define QTAWS_CREATECHANGESETRESPONSE_H

#include "finspacedataresponse.h"
#include "createchangesetrequest.h"

namespace QtAws {
namespace FinspaceData {

class CreateChangesetResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT CreateChangesetResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    CreateChangesetResponse(const CreateChangesetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateChangesetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChangesetResponse)
    Q_DISABLE_COPY(CreateChangesetResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
