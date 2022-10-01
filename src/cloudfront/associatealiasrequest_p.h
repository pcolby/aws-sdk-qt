// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEALIASREQUEST_P_H
#define QTAWS_ASSOCIATEALIASREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "associatealiasrequest.h"

namespace QtAws {
namespace CloudFront {

class AssociateAliasRequest;

class AssociateAliasRequestPrivate : public CloudFrontRequestPrivate {

public:
    AssociateAliasRequestPrivate(const CloudFrontRequest::Action action,
                                   AssociateAliasRequest * const q);
    AssociateAliasRequestPrivate(const AssociateAliasRequestPrivate &other,
                                   AssociateAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateAliasRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
