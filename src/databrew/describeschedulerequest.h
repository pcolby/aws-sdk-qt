// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEREQUEST_H
#define QTAWS_DESCRIBESCHEDULEREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class DescribeScheduleRequestPrivate;

class QTAWSDATABREW_EXPORT DescribeScheduleRequest : public DataBrewRequest {

public:
    DescribeScheduleRequest(const DescribeScheduleRequest &other);
    DescribeScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduleRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
