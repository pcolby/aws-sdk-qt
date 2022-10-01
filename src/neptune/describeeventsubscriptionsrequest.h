// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSUBSCRIPTIONSREQUEST_H
#define QTAWS_DESCRIBEEVENTSUBSCRIPTIONSREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DescribeEventSubscriptionsRequestPrivate;

class QTAWSNEPTUNE_EXPORT DescribeEventSubscriptionsRequest : public NeptuneRequest {

public:
    DescribeEventSubscriptionsRequest(const DescribeEventSubscriptionsRequest &other);
    DescribeEventSubscriptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventSubscriptionsRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
