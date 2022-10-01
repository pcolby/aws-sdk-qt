// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERELASTICIPREQUEST_P_H
#define QTAWS_DEREGISTERELASTICIPREQUEST_P_H

#include "opsworksrequest_p.h"
#include "deregisterelasticiprequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterElasticIpRequest;

class DeregisterElasticIpRequestPrivate : public OpsWorksRequestPrivate {

public:
    DeregisterElasticIpRequestPrivate(const OpsWorksRequest::Action action,
                                   DeregisterElasticIpRequest * const q);
    DeregisterElasticIpRequestPrivate(const DeregisterElasticIpRequestPrivate &other,
                                   DeregisterElasticIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterElasticIpRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
