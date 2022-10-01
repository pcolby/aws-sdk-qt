// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAMLPROVIDERREQUEST_P_H
#define QTAWS_UPDATESAMLPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "updatesamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class UpdateSAMLProviderRequest;

class UpdateSAMLProviderRequestPrivate : public IamRequestPrivate {

public:
    UpdateSAMLProviderRequestPrivate(const IamRequest::Action action,
                                   UpdateSAMLProviderRequest * const q);
    UpdateSAMLProviderRequestPrivate(const UpdateSAMLProviderRequestPrivate &other,
                                   UpdateSAMLProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
