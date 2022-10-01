// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEREPORTSUBSCRIPTIONREQUEST_P_H
#define QTAWS_CREATEUSAGEREPORTSUBSCRIPTIONREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createusagereportsubscriptionrequest.h"

namespace QtAws {
namespace AppStream {

class CreateUsageReportSubscriptionRequest;

class CreateUsageReportSubscriptionRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateUsageReportSubscriptionRequestPrivate(const AppStreamRequest::Action action,
                                   CreateUsageReportSubscriptionRequest * const q);
    CreateUsageReportSubscriptionRequestPrivate(const CreateUsageReportSubscriptionRequestPrivate &other,
                                   CreateUsageReportSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUsageReportSubscriptionRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
