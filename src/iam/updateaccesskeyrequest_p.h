// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSKEYREQUEST_P_H
#define QTAWS_UPDATEACCESSKEYREQUEST_P_H

#include "iamrequest_p.h"
#include "updateaccesskeyrequest.h"

namespace QtAws {
namespace Iam {

class UpdateAccessKeyRequest;

class UpdateAccessKeyRequestPrivate : public IamRequestPrivate {

public:
    UpdateAccessKeyRequestPrivate(const IamRequest::Action action,
                                   UpdateAccessKeyRequest * const q);
    UpdateAccessKeyRequestPrivate(const UpdateAccessKeyRequestPrivate &other,
                                   UpdateAccessKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAccessKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
