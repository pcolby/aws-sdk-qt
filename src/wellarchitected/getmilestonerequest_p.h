// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMILESTONEREQUEST_P_H
#define QTAWS_GETMILESTONEREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "getmilestonerequest.h"

namespace QtAws {
namespace WellArchitected {

class GetMilestoneRequest;

class GetMilestoneRequestPrivate : public WellArchitectedRequestPrivate {

public:
    GetMilestoneRequestPrivate(const WellArchitectedRequest::Action action,
                                   GetMilestoneRequest * const q);
    GetMilestoneRequestPrivate(const GetMilestoneRequestPrivate &other,
                                   GetMilestoneRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMilestoneRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
