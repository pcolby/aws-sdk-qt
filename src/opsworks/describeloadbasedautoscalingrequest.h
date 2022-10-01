// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBASEDAUTOSCALINGREQUEST_H
#define QTAWS_DESCRIBELOADBASEDAUTOSCALINGREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeLoadBasedAutoScalingRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeLoadBasedAutoScalingRequest : public OpsWorksRequest {

public:
    DescribeLoadBasedAutoScalingRequest(const DescribeLoadBasedAutoScalingRequest &other);
    DescribeLoadBasedAutoScalingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBasedAutoScalingRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
