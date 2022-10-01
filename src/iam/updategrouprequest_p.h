// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPREQUEST_P_H
#define QTAWS_UPDATEGROUPREQUEST_P_H

#include "iamrequest_p.h"
#include "updategrouprequest.h"

namespace QtAws {
namespace Iam {

class UpdateGroupRequest;

class UpdateGroupRequestPrivate : public IamRequestPrivate {

public:
    UpdateGroupRequestPrivate(const IamRequest::Action action,
                                   UpdateGroupRequest * const q);
    UpdateGroupRequestPrivate(const UpdateGroupRequestPrivate &other,
                                   UpdateGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGroupRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
