// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDOCUMENTPERMISSIONREQUEST_P_H
#define QTAWS_MODIFYDOCUMENTPERMISSIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "modifydocumentpermissionrequest.h"

namespace QtAws {
namespace Ssm {

class ModifyDocumentPermissionRequest;

class ModifyDocumentPermissionRequestPrivate : public SsmRequestPrivate {

public:
    ModifyDocumentPermissionRequestPrivate(const SsmRequest::Action action,
                                   ModifyDocumentPermissionRequest * const q);
    ModifyDocumentPermissionRequestPrivate(const ModifyDocumentPermissionRequestPrivate &other,
                                   ModifyDocumentPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDocumentPermissionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
