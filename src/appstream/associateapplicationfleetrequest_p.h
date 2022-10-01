// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPLICATIONFLEETREQUEST_P_H
#define QTAWS_ASSOCIATEAPPLICATIONFLEETREQUEST_P_H

#include "appstreamrequest_p.h"
#include "associateapplicationfleetrequest.h"

namespace QtAws {
namespace AppStream {

class AssociateApplicationFleetRequest;

class AssociateApplicationFleetRequestPrivate : public AppStreamRequestPrivate {

public:
    AssociateApplicationFleetRequestPrivate(const AppStreamRequest::Action action,
                                   AssociateApplicationFleetRequest * const q);
    AssociateApplicationFleetRequestPrivate(const AssociateApplicationFleetRequestPrivate &other,
                                   AssociateApplicationFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateApplicationFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
