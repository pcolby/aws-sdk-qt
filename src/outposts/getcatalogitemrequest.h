// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCATALOGITEMREQUEST_H
#define QTAWS_GETCATALOGITEMREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class GetCatalogItemRequestPrivate;

class QTAWSOUTPOSTS_EXPORT GetCatalogItemRequest : public OutpostsRequest {

public:
    GetCatalogItemRequest(const GetCatalogItemRequest &other);
    GetCatalogItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCatalogItemRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
