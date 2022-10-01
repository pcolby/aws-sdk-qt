// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTDETAILSREQUEST_H
#define QTAWS_DESCRIBEEVENTDETAILSREQUEST_H

#include "healthrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventDetailsRequestPrivate;

class QTAWSHEALTH_EXPORT DescribeEventDetailsRequest : public HealthRequest {

public:
    DescribeEventDetailsRequest(const DescribeEventDetailsRequest &other);
    DescribeEventDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventDetailsRequest)

};

} // namespace Health
} // namespace QtAws

#endif
