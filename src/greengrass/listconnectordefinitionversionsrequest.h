// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORDEFINITIONVERSIONSREQUEST_H
#define QTAWS_LISTCONNECTORDEFINITIONVERSIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListConnectorDefinitionVersionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListConnectorDefinitionVersionsRequest : public GreengrassRequest {

public:
    ListConnectorDefinitionVersionsRequest(const ListConnectorDefinitionVersionsRequest &other);
    ListConnectorDefinitionVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectorDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
