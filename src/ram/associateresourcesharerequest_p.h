// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCESHAREREQUEST_P_H
#define QTAWS_ASSOCIATERESOURCESHAREREQUEST_P_H

#include "ramrequest_p.h"
#include "associateresourcesharerequest.h"

namespace QtAws {
namespace Ram {

class AssociateResourceShareRequest;

class AssociateResourceShareRequestPrivate : public RamRequestPrivate {

public:
    AssociateResourceShareRequestPrivate(const RamRequest::Action action,
                                   AssociateResourceShareRequest * const q);
    AssociateResourceShareRequestPrivate(const AssociateResourceShareRequestPrivate &other,
                                   AssociateResourceShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateResourceShareRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
