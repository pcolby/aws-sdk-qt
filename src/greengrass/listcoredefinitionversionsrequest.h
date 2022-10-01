// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOREDEFINITIONVERSIONSREQUEST_H
#define QTAWS_LISTCOREDEFINITIONVERSIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListCoreDefinitionVersionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListCoreDefinitionVersionsRequest : public GreengrassRequest {

public:
    ListCoreDefinitionVersionsRequest(const ListCoreDefinitionVersionsRequest &other);
    ListCoreDefinitionVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoreDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
