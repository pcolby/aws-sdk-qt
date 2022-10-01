// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYPROVIDERREQUEST_H
#define QTAWS_CREATECAPACITYPROVIDERREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class CreateCapacityProviderRequestPrivate;

class QTAWSECS_EXPORT CreateCapacityProviderRequest : public EcsRequest {

public:
    CreateCapacityProviderRequest(const CreateCapacityProviderRequest &other);
    CreateCapacityProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCapacityProviderRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
