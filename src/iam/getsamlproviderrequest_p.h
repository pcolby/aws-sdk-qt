// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMLPROVIDERREQUEST_P_H
#define QTAWS_GETSAMLPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "getsamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class GetSAMLProviderRequest;

class GetSAMLProviderRequestPrivate : public IamRequestPrivate {

public:
    GetSAMLProviderRequestPrivate(const IamRequest::Action action,
                                   GetSAMLProviderRequest * const q);
    GetSAMLProviderRequestPrivate(const GetSAMLProviderRequestPrivate &other,
                                   GetSAMLProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
