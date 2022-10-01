// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGINPROFILEREQUEST_P_H
#define QTAWS_CREATELOGINPROFILEREQUEST_P_H

#include "iamrequest_p.h"
#include "createloginprofilerequest.h"

namespace QtAws {
namespace Iam {

class CreateLoginProfileRequest;

class CreateLoginProfileRequestPrivate : public IamRequestPrivate {

public:
    CreateLoginProfileRequestPrivate(const IamRequest::Action action,
                                   CreateLoginProfileRequest * const q);
    CreateLoginProfileRequestPrivate(const CreateLoginProfileRequestPrivate &other,
                                   CreateLoginProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLoginProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
