// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNINSTANCEREQUEST_P_H
#define QTAWS_ASSIGNINSTANCEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "assigninstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class AssignInstanceRequest;

class AssignInstanceRequestPrivate : public OpsWorksRequestPrivate {

public:
    AssignInstanceRequestPrivate(const OpsWorksRequest::Action action,
                                   AssignInstanceRequest * const q);
    AssignInstanceRequestPrivate(const AssignInstanceRequestPrivate &other,
                                   AssignInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssignInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
