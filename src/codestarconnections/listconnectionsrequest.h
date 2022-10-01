// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTIONSREQUEST_H
#define QTAWS_LISTCONNECTIONSREQUEST_H

#include "codestarconnectionsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class ListConnectionsRequestPrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT ListConnectionsRequest : public CodeStarconnectionsRequest {

public:
    ListConnectionsRequest(const ListConnectionsRequest &other);
    ListConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectionsRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
