// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTTYPESREQUEST_H
#define QTAWS_DESCRIBEEVENTTYPESREQUEST_H

#include "healthrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventTypesRequestPrivate;

class QTAWSHEALTH_EXPORT DescribeEventTypesRequest : public HealthRequest {

public:
    DescribeEventTypesRequest(const DescribeEventTypesRequest &other);
    DescribeEventTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventTypesRequest)

};

} // namespace Health
} // namespace QtAws

#endif
