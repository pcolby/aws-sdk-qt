// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEPROFILEREQUEST_P_H
#define QTAWS_CREATEINSTANCEPROFILEREQUEST_P_H

#include "iamrequest_p.h"
#include "createinstanceprofilerequest.h"

namespace QtAws {
namespace Iam {

class CreateInstanceProfileRequest;

class CreateInstanceProfileRequestPrivate : public IamRequestPrivate {

public:
    CreateInstanceProfileRequestPrivate(const IamRequest::Action action,
                                   CreateInstanceProfileRequest * const q);
    CreateInstanceProfileRequestPrivate(const CreateInstanceProfileRequestPrivate &other,
                                   CreateInstanceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInstanceProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
