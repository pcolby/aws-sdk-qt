// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDHCPOPTIONSREQUEST_P_H
#define QTAWS_ASSOCIATEDHCPOPTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "associatedhcpoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateDhcpOptionsRequest;

class AssociateDhcpOptionsRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateDhcpOptionsRequestPrivate(const Ec2Request::Action action,
                                   AssociateDhcpOptionsRequest * const q);
    AssociateDhcpOptionsRequestPrivate(const AssociateDhcpOptionsRequestPrivate &other,
                                   AssociateDhcpOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateDhcpOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
