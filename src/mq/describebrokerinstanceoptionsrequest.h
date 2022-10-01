// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBROKERINSTANCEOPTIONSREQUEST_H
#define QTAWS_DESCRIBEBROKERINSTANCEOPTIONSREQUEST_H

#include "mqrequest.h"

namespace QtAws {
namespace Mq {

class DescribeBrokerInstanceOptionsRequestPrivate;

class QTAWSMQ_EXPORT DescribeBrokerInstanceOptionsRequest : public MqRequest {

public:
    DescribeBrokerInstanceOptionsRequest(const DescribeBrokerInstanceOptionsRequest &other);
    DescribeBrokerInstanceOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBrokerInstanceOptionsRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
