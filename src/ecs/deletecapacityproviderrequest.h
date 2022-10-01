// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECAPACITYPROVIDERREQUEST_H
#define QTAWS_DELETECAPACITYPROVIDERREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteCapacityProviderRequestPrivate;

class QTAWSECS_EXPORT DeleteCapacityProviderRequest : public EcsRequest {

public:
    DeleteCapacityProviderRequest(const DeleteCapacityProviderRequest &other);
    DeleteCapacityProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCapacityProviderRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
