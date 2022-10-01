// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCONTAINERINSTANCEREQUEST_H
#define QTAWS_REGISTERCONTAINERINSTANCEREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class RegisterContainerInstanceRequestPrivate;

class QTAWSECS_EXPORT RegisterContainerInstanceRequest : public EcsRequest {

public:
    RegisterContainerInstanceRequest(const RegisterContainerInstanceRequest &other);
    RegisterContainerInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterContainerInstanceRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
