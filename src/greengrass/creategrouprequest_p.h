// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPREQUEST_P_H
#define QTAWS_CREATEGROUPREQUEST_P_H

#include "greengrassrequest_p.h"
#include "creategrouprequest.h"

namespace QtAws {
namespace Greengrass {

class CreateGroupRequest;

class CreateGroupRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateGroupRequestPrivate(const GreengrassRequest::Action action,
                                   CreateGroupRequest * const q);
    CreateGroupRequestPrivate(const CreateGroupRequestPrivate &other,
                                   CreateGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGroupRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
