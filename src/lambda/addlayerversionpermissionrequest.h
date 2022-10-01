// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLAYERVERSIONPERMISSIONREQUEST_H
#define QTAWS_ADDLAYERVERSIONPERMISSIONREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class AddLayerVersionPermissionRequestPrivate;

class QTAWSLAMBDA_EXPORT AddLayerVersionPermissionRequest : public LambdaRequest {

public:
    AddLayerVersionPermissionRequest(const AddLayerVersionPermissionRequest &other);
    AddLayerVersionPermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddLayerVersionPermissionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
