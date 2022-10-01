// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCATALOGITEMSREQUEST_H
#define QTAWS_LISTCATALOGITEMSREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class ListCatalogItemsRequestPrivate;

class QTAWSOUTPOSTS_EXPORT ListCatalogItemsRequest : public OutpostsRequest {

public:
    ListCatalogItemsRequest(const ListCatalogItemsRequest &other);
    ListCatalogItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCatalogItemsRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
