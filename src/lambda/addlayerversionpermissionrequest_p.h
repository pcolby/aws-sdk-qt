// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLAYERVERSIONPERMISSIONREQUEST_P_H
#define QTAWS_ADDLAYERVERSIONPERMISSIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "addlayerversionpermissionrequest.h"

namespace QtAws {
namespace Lambda {

class AddLayerVersionPermissionRequest;

class AddLayerVersionPermissionRequestPrivate : public LambdaRequestPrivate {

public:
    AddLayerVersionPermissionRequestPrivate(const LambdaRequest::Action action,
                                   AddLayerVersionPermissionRequest * const q);
    AddLayerVersionPermissionRequestPrivate(const AddLayerVersionPermissionRequestPrivate &other,
                                   AddLayerVersionPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddLayerVersionPermissionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
