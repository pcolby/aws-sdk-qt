// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERELASTICIPREQUEST_P_H
#define QTAWS_REGISTERELASTICIPREQUEST_P_H

#include "opsworksrequest_p.h"
#include "registerelasticiprequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterElasticIpRequest;

class RegisterElasticIpRequestPrivate : public OpsWorksRequestPrivate {

public:
    RegisterElasticIpRequestPrivate(const OpsWorksRequest::Action action,
                                   RegisterElasticIpRequest * const q);
    RegisterElasticIpRequestPrivate(const RegisterElasticIpRequestPrivate &other,
                                   RegisterElasticIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterElasticIpRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
