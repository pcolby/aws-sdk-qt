// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETOINSTANCEPROFILEREQUEST_P_H
#define QTAWS_ADDROLETOINSTANCEPROFILEREQUEST_P_H

#include "iamrequest_p.h"
#include "addroletoinstanceprofilerequest.h"

namespace QtAws {
namespace Iam {

class AddRoleToInstanceProfileRequest;

class AddRoleToInstanceProfileRequestPrivate : public IamRequestPrivate {

public:
    AddRoleToInstanceProfileRequestPrivate(const IamRequest::Action action,
                                   AddRoleToInstanceProfileRequest * const q);
    AddRoleToInstanceProfileRequestPrivate(const AddRoleToInstanceProfileRequestPrivate &other,
                                   AddRoleToInstanceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddRoleToInstanceProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
