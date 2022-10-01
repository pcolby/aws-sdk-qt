// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORDEFINITIONSREQUEST_H
#define QTAWS_LISTCONNECTORDEFINITIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListConnectorDefinitionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListConnectorDefinitionsRequest : public GreengrassRequest {

public:
    ListConnectorDefinitionsRequest(const ListConnectorDefinitionsRequest &other);
    ListConnectorDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectorDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
