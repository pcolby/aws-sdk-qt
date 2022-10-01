// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONDEFINITIONVERSIONSREQUEST_H
#define QTAWS_LISTSUBSCRIPTIONDEFINITIONVERSIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListSubscriptionDefinitionVersionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListSubscriptionDefinitionVersionsRequest : public GreengrassRequest {

public:
    ListSubscriptionDefinitionVersionsRequest(const ListSubscriptionDefinitionVersionsRequest &other);
    ListSubscriptionDefinitionVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubscriptionDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
