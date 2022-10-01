// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMEBASEDAUTOSCALINGREQUEST_H
#define QTAWS_DESCRIBETIMEBASEDAUTOSCALINGREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeTimeBasedAutoScalingRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeTimeBasedAutoScalingRequest : public OpsWorksRequest {

public:
    DescribeTimeBasedAutoScalingRequest(const DescribeTimeBasedAutoScalingRequest &other);
    DescribeTimeBasedAutoScalingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTimeBasedAutoScalingRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
