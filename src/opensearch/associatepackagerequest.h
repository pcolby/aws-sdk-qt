// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPACKAGEREQUEST_H
#define QTAWS_ASSOCIATEPACKAGEREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class AssociatePackageRequestPrivate;

class QTAWSOPENSEARCH_EXPORT AssociatePackageRequest : public OpenSearchRequest {

public:
    AssociatePackageRequest(const AssociatePackageRequest &other);
    AssociatePackageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePackageRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
