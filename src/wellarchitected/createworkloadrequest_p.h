// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKLOADREQUEST_P_H
#define QTAWS_CREATEWORKLOADREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "createworkloadrequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateWorkloadRequest;

class CreateWorkloadRequestPrivate : public WellArchitectedRequestPrivate {

public:
    CreateWorkloadRequestPrivate(const WellArchitectedRequest::Action action,
                                   CreateWorkloadRequest * const q);
    CreateWorkloadRequestPrivate(const CreateWorkloadRequestPrivate &other,
                                   CreateWorkloadRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkloadRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
