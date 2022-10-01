// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDIALREQUESTBATCHREQUEST_H
#define QTAWS_PUTDIALREQUESTBATCHREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class PutDialRequestBatchRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT PutDialRequestBatchRequest : public ConnectCampaignsRequest {

public:
    PutDialRequestBatchRequest(const PutDialRequestBatchRequest &other);
    PutDialRequestBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDialRequestBatchRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
