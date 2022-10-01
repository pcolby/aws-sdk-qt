// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGEREQUEST_P_H
#define QTAWS_UPDATEPACKAGEREQUEST_P_H

#include "opensearchrequest_p.h"
#include "updatepackagerequest.h"

namespace QtAws {
namespace OpenSearch {

class UpdatePackageRequest;

class UpdatePackageRequestPrivate : public OpenSearchRequestPrivate {

public:
    UpdatePackageRequestPrivate(const OpenSearchRequest::Action action,
                                   UpdatePackageRequest * const q);
    UpdatePackageRequestPrivate(const UpdatePackageRequestPrivate &other,
                                   UpdatePackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePackageRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
