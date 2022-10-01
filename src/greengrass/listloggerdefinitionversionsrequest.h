// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGERDEFINITIONVERSIONSREQUEST_H
#define QTAWS_LISTLOGGERDEFINITIONVERSIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListLoggerDefinitionVersionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListLoggerDefinitionVersionsRequest : public GreengrassRequest {

public:
    ListLoggerDefinitionVersionsRequest(const ListLoggerDefinitionVersionsRequest &other);
    ListLoggerDefinitionVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLoggerDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
