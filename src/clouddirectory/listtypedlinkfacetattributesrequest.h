// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEDLINKFACETATTRIBUTESREQUEST_H
#define QTAWS_LISTTYPEDLINKFACETATTRIBUTESREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListTypedLinkFacetAttributesRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListTypedLinkFacetAttributesRequest : public CloudDirectoryRequest {

public:
    ListTypedLinkFacetAttributesRequest(const ListTypedLinkFacetAttributesRequest &other);
    ListTypedLinkFacetAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTypedLinkFacetAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
