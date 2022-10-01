// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORDEFINITIONVERSIONRESPONSE_H
#define QTAWS_GETCONNECTORDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "getconnectordefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetConnectorDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetConnectorDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetConnectorDefinitionVersionResponse(const GetConnectorDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConnectorDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectorDefinitionVersionResponse)
    Q_DISABLE_COPY(GetConnectorDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
