// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPREQUEST_P_H
#define QTAWS_CREATEGROUPREQUEST_P_H

#include "workmailrequest_p.h"
#include "creategrouprequest.h"

namespace QtAws {
namespace WorkMail {

class CreateGroupRequest;

class CreateGroupRequestPrivate : public WorkMailRequestPrivate {

public:
    CreateGroupRequestPrivate(const WorkMailRequest::Action action,
                                   CreateGroupRequest * const q);
    CreateGroupRequestPrivate(const CreateGroupRequestPrivate &other,
                                   CreateGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGroupRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
