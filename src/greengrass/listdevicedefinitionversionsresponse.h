// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEDEFINITIONVERSIONSRESPONSE_H
#define QTAWS_LISTDEVICEDEFINITIONVERSIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listdevicedefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListDeviceDefinitionVersionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListDeviceDefinitionVersionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListDeviceDefinitionVersionsResponse(const ListDeviceDefinitionVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeviceDefinitionVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListDeviceDefinitionVersionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
