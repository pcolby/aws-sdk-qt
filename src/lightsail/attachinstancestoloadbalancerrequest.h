// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHINSTANCESTOLOADBALANCERREQUEST_H
#define QTAWS_ATTACHINSTANCESTOLOADBALANCERREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class AttachInstancesToLoadBalancerRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT AttachInstancesToLoadBalancerRequest : public LightsailRequest {

public:
    AttachInstancesToLoadBalancerRequest(const AttachInstancesToLoadBalancerRequest &other);
    AttachInstancesToLoadBalancerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachInstancesToLoadBalancerRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
