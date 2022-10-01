// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSKEYREQUEST_P_H
#define QTAWS_CREATEACCESSKEYREQUEST_P_H

#include "iamrequest_p.h"
#include "createaccesskeyrequest.h"

namespace QtAws {
namespace Iam {

class CreateAccessKeyRequest;

class CreateAccessKeyRequestPrivate : public IamRequestPrivate {

public:
    CreateAccessKeyRequestPrivate(const IamRequest::Action action,
                                   CreateAccessKeyRequest * const q);
    CreateAccessKeyRequestPrivate(const CreateAccessKeyRequestPrivate &other,
                                   CreateAccessKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccessKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
