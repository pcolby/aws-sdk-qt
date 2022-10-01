// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONFIGREQUEST_P_H
#define QTAWS_UPDATEDOMAINCONFIGREQUEST_P_H

#include "opensearchrequest_p.h"
#include "updatedomainconfigrequest.h"

namespace QtAws {
namespace OpenSearch {

class UpdateDomainConfigRequest;

class UpdateDomainConfigRequestPrivate : public OpenSearchRequestPrivate {

public:
    UpdateDomainConfigRequestPrivate(const OpenSearchRequest::Action action,
                                   UpdateDomainConfigRequest * const q);
    UpdateDomainConfigRequestPrivate(const UpdateDomainConfigRequestPrivate &other,
                                   UpdateDomainConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainConfigRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
