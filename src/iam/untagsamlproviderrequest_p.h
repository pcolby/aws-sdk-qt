// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSAMLPROVIDERREQUEST_P_H
#define QTAWS_UNTAGSAMLPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "untagsamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class UntagSAMLProviderRequest;

class UntagSAMLProviderRequestPrivate : public IamRequestPrivate {

public:
    UntagSAMLProviderRequestPrivate(const IamRequest::Action action,
                                   UntagSAMLProviderRequest * const q);
    UntagSAMLProviderRequestPrivate(const UntagSAMLProviderRequestPrivate &other,
                                   UntagSAMLProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
