// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGEREPORTSUBSCRIPTIONREQUEST_P_H
#define QTAWS_DELETEUSAGEREPORTSUBSCRIPTIONREQUEST_P_H

#include "appstreamrequest_p.h"
#include "deleteusagereportsubscriptionrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteUsageReportSubscriptionRequest;

class DeleteUsageReportSubscriptionRequestPrivate : public AppStreamRequestPrivate {

public:
    DeleteUsageReportSubscriptionRequestPrivate(const AppStreamRequest::Action action,
                                   DeleteUsageReportSubscriptionRequest * const q);
    DeleteUsageReportSubscriptionRequestPrivate(const DeleteUsageReportSubscriptionRequestPrivate &other,
                                   DeleteUsageReportSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUsageReportSubscriptionRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
