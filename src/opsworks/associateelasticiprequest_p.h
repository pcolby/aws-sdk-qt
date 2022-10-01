// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEELASTICIPREQUEST_P_H
#define QTAWS_ASSOCIATEELASTICIPREQUEST_P_H

#include "opsworksrequest_p.h"
#include "associateelasticiprequest.h"

namespace QtAws {
namespace OpsWorks {

class AssociateElasticIpRequest;

class AssociateElasticIpRequestPrivate : public OpsWorksRequestPrivate {

public:
    AssociateElasticIpRequestPrivate(const OpsWorksRequest::Action action,
                                   AssociateElasticIpRequest * const q);
    AssociateElasticIpRequestPrivate(const AssociateElasticIpRequestPrivate &other,
                                   AssociateElasticIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateElasticIpRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
