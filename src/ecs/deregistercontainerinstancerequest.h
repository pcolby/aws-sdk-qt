// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCONTAINERINSTANCEREQUEST_H
#define QTAWS_DEREGISTERCONTAINERINSTANCEREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DeregisterContainerInstanceRequestPrivate;

class QTAWSECS_EXPORT DeregisterContainerInstanceRequest : public EcsRequest {

public:
    DeregisterContainerInstanceRequest(const DeregisterContainerInstanceRequest &other);
    DeregisterContainerInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterContainerInstanceRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
