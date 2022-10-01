// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATENODEREQUEST_P_H
#define QTAWS_ASSOCIATENODEREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "associatenoderequest.h"

namespace QtAws {
namespace OpsWorksCm {

class AssociateNodeRequest;

class AssociateNodeRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    AssociateNodeRequestPrivate(const OpsWorksCmRequest::Action action,
                                   AssociateNodeRequest * const q);
    AssociateNodeRequestPrivate(const AssociateNodeRequestPrivate &other,
                                   AssociateNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateNodeRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
