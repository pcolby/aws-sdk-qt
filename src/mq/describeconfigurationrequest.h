// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBECONFIGURATIONREQUEST_H

#include "mqrequest.h"

namespace QtAws {
namespace Mq {

class DescribeConfigurationRequestPrivate;

class QTAWSMQ_EXPORT DescribeConfigurationRequest : public MqRequest {

public:
    DescribeConfigurationRequest(const DescribeConfigurationRequest &other);
    DescribeConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
