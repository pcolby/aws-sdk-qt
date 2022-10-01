// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMLPROVIDERREQUEST_P_H
#define QTAWS_CREATESAMLPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "createsamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class CreateSAMLProviderRequest;

class CreateSAMLProviderRequestPrivate : public IamRequestPrivate {

public:
    CreateSAMLProviderRequestPrivate(const IamRequest::Action action,
                                   CreateSAMLProviderRequest * const q);
    CreateSAMLProviderRequestPrivate(const CreateSAMLProviderRequestPrivate &other,
                                   CreateSAMLProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
