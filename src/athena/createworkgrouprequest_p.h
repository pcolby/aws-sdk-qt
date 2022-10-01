// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKGROUPREQUEST_P_H
#define QTAWS_CREATEWORKGROUPREQUEST_P_H

#include "athenarequest_p.h"
#include "createworkgrouprequest.h"

namespace QtAws {
namespace Athena {

class CreateWorkGroupRequest;

class CreateWorkGroupRequestPrivate : public AthenaRequestPrivate {

public:
    CreateWorkGroupRequestPrivate(const AthenaRequest::Action action,
                                   CreateWorkGroupRequest * const q);
    CreateWorkGroupRequestPrivate(const CreateWorkGroupRequestPrivate &other,
                                   CreateWorkGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkGroupRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
