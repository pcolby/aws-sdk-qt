// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFACETATTRIBUTESREQUEST_H
#define QTAWS_LISTFACETATTRIBUTESREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListFacetAttributesRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListFacetAttributesRequest : public CloudDirectoryRequest {

public:
    ListFacetAttributesRequest(const ListFacetAttributesRequest &other);
    ListFacetAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFacetAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
