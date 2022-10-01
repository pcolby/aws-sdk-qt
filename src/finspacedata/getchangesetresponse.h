// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGESETRESPONSE_H
#define QTAWS_GETCHANGESETRESPONSE_H

#include "finspacedataresponse.h"
#include "getchangesetrequest.h"

namespace QtAws {
namespace FinspaceData {

class GetChangesetResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT GetChangesetResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    GetChangesetResponse(const GetChangesetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChangesetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangesetResponse)
    Q_DISABLE_COPY(GetChangesetResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
