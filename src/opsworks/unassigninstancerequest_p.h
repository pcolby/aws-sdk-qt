// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNINSTANCEREQUEST_P_H
#define QTAWS_UNASSIGNINSTANCEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "unassigninstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class UnassignInstanceRequest;

class UnassignInstanceRequestPrivate : public OpsWorksRequestPrivate {

public:
    UnassignInstanceRequestPrivate(const OpsWorksRequest::Action action,
                                   UnassignInstanceRequest * const q);
    UnassignInstanceRequestPrivate(const UnassignInstanceRequestPrivate &other,
                                   UnassignInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnassignInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
