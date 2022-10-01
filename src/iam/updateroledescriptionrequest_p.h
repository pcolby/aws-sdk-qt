// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLEDESCRIPTIONREQUEST_P_H
#define QTAWS_UPDATEROLEDESCRIPTIONREQUEST_P_H

#include "iamrequest_p.h"
#include "updateroledescriptionrequest.h"

namespace QtAws {
namespace Iam {

class UpdateRoleDescriptionRequest;

class UpdateRoleDescriptionRequestPrivate : public IamRequestPrivate {

public:
    UpdateRoleDescriptionRequestPrivate(const IamRequest::Action action,
                                   UpdateRoleDescriptionRequest * const q);
    UpdateRoleDescriptionRequestPrivate(const UpdateRoleDescriptionRequestPrivate &other,
                                   UpdateRoleDescriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoleDescriptionRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
