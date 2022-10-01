// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDIALREQUESTBATCHRESPONSE_H
#define QTAWS_PUTDIALREQUESTBATCHRESPONSE_H

#include "connectcampaignsresponse.h"
#include "putdialrequestbatchrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class PutDialRequestBatchResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT PutDialRequestBatchResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    PutDialRequestBatchResponse(const PutDialRequestBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDialRequestBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDialRequestBatchResponse)
    Q_DISABLE_COPY(PutDialRequestBatchResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
