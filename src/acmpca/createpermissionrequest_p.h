// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONREQUEST_P_H
#define QTAWS_CREATEPERMISSIONREQUEST_P_H

#include "acmpcarequest_p.h"
#include "createpermissionrequest.h"

namespace QtAws {
namespace AcmPca {

class CreatePermissionRequest;

class CreatePermissionRequestPrivate : public AcmPcaRequestPrivate {

public:
    CreatePermissionRequestPrivate(const AcmPcaRequest::Action action,
                                   CreatePermissionRequest * const q);
    CreatePermissionRequestPrivate(const CreatePermissionRequestPrivate &other,
                                   CreatePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePermissionRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
