// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERECSCLUSTERREQUEST_P_H
#define QTAWS_REGISTERECSCLUSTERREQUEST_P_H

#include "opsworksrequest_p.h"
#include "registerecsclusterrequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterEcsClusterRequest;

class RegisterEcsClusterRequestPrivate : public OpsWorksRequestPrivate {

public:
    RegisterEcsClusterRequestPrivate(const OpsWorksRequest::Action action,
                                   RegisterEcsClusterRequest * const q);
    RegisterEcsClusterRequestPrivate(const RegisterEcsClusterRequestPrivate &other,
                                   RegisterEcsClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterEcsClusterRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
