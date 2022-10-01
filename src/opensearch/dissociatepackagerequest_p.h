// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISSOCIATEPACKAGEREQUEST_P_H
#define QTAWS_DISSOCIATEPACKAGEREQUEST_P_H

#include "opensearchrequest_p.h"
#include "dissociatepackagerequest.h"

namespace QtAws {
namespace OpenSearch {

class DissociatePackageRequest;

class DissociatePackageRequestPrivate : public OpenSearchRequestPrivate {

public:
    DissociatePackageRequestPrivate(const OpenSearchRequest::Action action,
                                   DissociatePackageRequest * const q);
    DissociatePackageRequestPrivate(const DissociatePackageRequestPrivate &other,
                                   DissociatePackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DissociatePackageRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
