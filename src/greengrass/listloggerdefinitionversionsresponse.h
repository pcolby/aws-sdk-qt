// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGERDEFINITIONVERSIONSRESPONSE_H
#define QTAWS_LISTLOGGERDEFINITIONVERSIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listloggerdefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListLoggerDefinitionVersionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListLoggerDefinitionVersionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListLoggerDefinitionVersionsResponse(const ListLoggerDefinitionVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLoggerDefinitionVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLoggerDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListLoggerDefinitionVersionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
