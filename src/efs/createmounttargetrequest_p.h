// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMOUNTTARGETREQUEST_P_H
#define QTAWS_CREATEMOUNTTARGETREQUEST_P_H

#include "efsrequest_p.h"
#include "createmounttargetrequest.h"

namespace QtAws {
namespace Efs {

class CreateMountTargetRequest;

class CreateMountTargetRequestPrivate : public EfsRequestPrivate {

public:
    CreateMountTargetRequestPrivate(const EfsRequest::Action action,
                                   CreateMountTargetRequest * const q);
    CreateMountTargetRequestPrivate(const CreateMountTargetRequestPrivate &other,
                                   CreateMountTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMountTargetRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
