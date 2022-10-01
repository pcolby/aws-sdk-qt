// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONDEFINITIONVERSIONSREQUEST_H
#define QTAWS_LISTFUNCTIONDEFINITIONVERSIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListFunctionDefinitionVersionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListFunctionDefinitionVersionsRequest : public GreengrassRequest {

public:
    ListFunctionDefinitionVersionsRequest(const ListFunctionDefinitionVersionsRequest &other);
    ListFunctionDefinitionVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
