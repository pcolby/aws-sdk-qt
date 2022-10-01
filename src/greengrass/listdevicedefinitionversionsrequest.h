// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEDEFINITIONVERSIONSREQUEST_H
#define QTAWS_LISTDEVICEDEFINITIONVERSIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListDeviceDefinitionVersionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListDeviceDefinitionVersionsRequest : public GreengrassRequest {

public:
    ListDeviceDefinitionVersionsRequest(const ListDeviceDefinitionVersionsRequest &other);
    ListDeviceDefinitionVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
