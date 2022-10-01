// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPREQUEST_P_H
#define QTAWS_DELETEGROUPREQUEST_P_H

#include "greengrassrequest_p.h"
#include "deletegrouprequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteGroupRequest;

class DeleteGroupRequestPrivate : public GreengrassRequestPrivate {

public:
    DeleteGroupRequestPrivate(const GreengrassRequest::Action action,
                                   DeleteGroupRequest * const q);
    DeleteGroupRequestPrivate(const DeleteGroupRequestPrivate &other,
                                   DeleteGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGroupRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
