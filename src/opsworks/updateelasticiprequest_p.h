// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEELASTICIPREQUEST_P_H
#define QTAWS_UPDATEELASTICIPREQUEST_P_H

#include "opsworksrequest_p.h"
#include "updateelasticiprequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateElasticIpRequest;

class UpdateElasticIpRequestPrivate : public OpsWorksRequestPrivate {

public:
    UpdateElasticIpRequestPrivate(const OpsWorksRequest::Action action,
                                   UpdateElasticIpRequest * const q);
    UpdateElasticIpRequestPrivate(const UpdateElasticIpRequestPrivate &other,
                                   UpdateElasticIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateElasticIpRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
