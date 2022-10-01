// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVELAYERVERSIONPERMISSIONREQUEST_P_H
#define QTAWS_REMOVELAYERVERSIONPERMISSIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "removelayerversionpermissionrequest.h"

namespace QtAws {
namespace Lambda {

class RemoveLayerVersionPermissionRequest;

class RemoveLayerVersionPermissionRequestPrivate : public LambdaRequestPrivate {

public:
    RemoveLayerVersionPermissionRequestPrivate(const LambdaRequest::Action action,
                                   RemoveLayerVersionPermissionRequest * const q);
    RemoveLayerVersionPermissionRequestPrivate(const RemoveLayerVersionPermissionRequestPrivate &other,
                                   RemoveLayerVersionPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveLayerVersionPermissionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
