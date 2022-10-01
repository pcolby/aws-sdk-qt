// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTSUBSCRIPTIONREQUEST_H
#define QTAWS_DESCRIBEACCOUNTSUBSCRIPTIONREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountSubscriptionRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeAccountSubscriptionRequest : public QuickSightRequest {

public:
    DescribeAccountSubscriptionRequest(const DescribeAccountSubscriptionRequest &other);
    DescribeAccountSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountSubscriptionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
