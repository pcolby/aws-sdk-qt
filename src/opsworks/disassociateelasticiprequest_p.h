// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEELASTICIPREQUEST_P_H
#define QTAWS_DISASSOCIATEELASTICIPREQUEST_P_H

#include "opsworksrequest_p.h"
#include "disassociateelasticiprequest.h"

namespace QtAws {
namespace OpsWorks {

class DisassociateElasticIpRequest;

class DisassociateElasticIpRequestPrivate : public OpsWorksRequestPrivate {

public:
    DisassociateElasticIpRequestPrivate(const OpsWorksRequest::Action action,
                                   DisassociateElasticIpRequest * const q);
    DisassociateElasticIpRequestPrivate(const DisassociateElasticIpRequestPrivate &other,
                                   DisassociateElasticIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateElasticIpRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
