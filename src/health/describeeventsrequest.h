// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSREQUEST_H
#define QTAWS_DESCRIBEEVENTSREQUEST_H

#include "healthrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventsRequestPrivate;

class QTAWSHEALTH_EXPORT DescribeEventsRequest : public HealthRequest {

public:
    DescribeEventsRequest(const DescribeEventsRequest &other);
    DescribeEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventsRequest)

};

} // namespace Health
} // namespace QtAws

#endif
