// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMILESTONEREQUEST_P_H
#define QTAWS_CREATEMILESTONEREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "createmilestonerequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateMilestoneRequest;

class CreateMilestoneRequestPrivate : public WellArchitectedRequestPrivate {

public:
    CreateMilestoneRequestPrivate(const WellArchitectedRequest::Action action,
                                   CreateMilestoneRequest * const q);
    CreateMilestoneRequestPrivate(const CreateMilestoneRequestPrivate &other,
                                   CreateMilestoneRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMilestoneRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
