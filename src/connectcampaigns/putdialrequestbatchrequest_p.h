// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDIALREQUESTBATCHREQUEST_P_H
#define QTAWS_PUTDIALREQUESTBATCHREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "putdialrequestbatchrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class PutDialRequestBatchRequest;

class PutDialRequestBatchRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    PutDialRequestBatchRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   PutDialRequestBatchRequest * const q);
    PutDialRequestBatchRequestPrivate(const PutDialRequestBatchRequestPrivate &other,
                                   PutDialRequestBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDialRequestBatchRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
