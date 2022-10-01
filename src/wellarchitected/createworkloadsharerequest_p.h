// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKLOADSHAREREQUEST_P_H
#define QTAWS_CREATEWORKLOADSHAREREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "createworkloadsharerequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateWorkloadShareRequest;

class CreateWorkloadShareRequestPrivate : public WellArchitectedRequestPrivate {

public:
    CreateWorkloadShareRequestPrivate(const WellArchitectedRequest::Action action,
                                   CreateWorkloadShareRequest * const q);
    CreateWorkloadShareRequestPrivate(const CreateWorkloadShareRequestPrivate &other,
                                   CreateWorkloadShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkloadShareRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
