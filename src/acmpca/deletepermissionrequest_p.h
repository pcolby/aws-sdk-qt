// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONREQUEST_P_H
#define QTAWS_DELETEPERMISSIONREQUEST_P_H

#include "acmpcarequest_p.h"
#include "deletepermissionrequest.h"

namespace QtAws {
namespace AcmPca {

class DeletePermissionRequest;

class DeletePermissionRequestPrivate : public AcmPcaRequestPrivate {

public:
    DeletePermissionRequestPrivate(const AcmPcaRequest::Action action,
                                   DeletePermissionRequest * const q);
    DeletePermissionRequestPrivate(const DeletePermissionRequestPrivate &other,
                                   DeletePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePermissionRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
