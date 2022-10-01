// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFLEETREQUEST_P_H
#define QTAWS_ASSOCIATEFLEETREQUEST_P_H

#include "appstreamrequest_p.h"
#include "associatefleetrequest.h"

namespace QtAws {
namespace AppStream {

class AssociateFleetRequest;

class AssociateFleetRequestPrivate : public AppStreamRequestPrivate {

public:
    AssociateFleetRequestPrivate(const AppStreamRequest::Action action,
                                   AssociateFleetRequest * const q);
    AssociateFleetRequestPrivate(const AssociateFleetRequestPrivate &other,
                                   AssociateFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
