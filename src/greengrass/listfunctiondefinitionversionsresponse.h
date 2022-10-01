// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONDEFINITIONVERSIONSRESPONSE_H
#define QTAWS_LISTFUNCTIONDEFINITIONVERSIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listfunctiondefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListFunctionDefinitionVersionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListFunctionDefinitionVersionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListFunctionDefinitionVersionsResponse(const ListFunctionDefinitionVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFunctionDefinitionVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListFunctionDefinitionVersionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
