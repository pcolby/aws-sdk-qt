// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPERMISSIONREQUEST_P_H
#define QTAWS_ADDPERMISSIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "addpermissionrequest.h"

namespace QtAws {
namespace Lambda {

class AddPermissionRequest;

class AddPermissionRequestPrivate : public LambdaRequestPrivate {

public:
    AddPermissionRequestPrivate(const LambdaRequest::Action action,
                                   AddPermissionRequest * const q);
    AddPermissionRequestPrivate(const AddPermissionRequestPrivate &other,
                                   AddPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddPermissionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
