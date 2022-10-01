// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSAMLPROVIDERREQUEST_P_H
#define QTAWS_TAGSAMLPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "tagsamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class TagSAMLProviderRequest;

class TagSAMLProviderRequestPrivate : public IamRequestPrivate {

public:
    TagSAMLProviderRequestPrivate(const IamRequest::Action action,
                                   TagSAMLProviderRequest * const q);
    TagSAMLProviderRequestPrivate(const TagSAMLProviderRequestPrivate &other,
                                   TagSAMLProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
