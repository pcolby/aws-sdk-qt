// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVELAYERVERSIONPERMISSIONREQUEST_H
#define QTAWS_REMOVELAYERVERSIONPERMISSIONREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class RemoveLayerVersionPermissionRequestPrivate;

class QTAWSLAMBDA_EXPORT RemoveLayerVersionPermissionRequest : public LambdaRequest {

public:
    RemoveLayerVersionPermissionRequest(const RemoveLayerVersionPermissionRequest &other);
    RemoveLayerVersionPermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveLayerVersionPermissionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
