// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORDEFINITIONRESPONSE_H
#define QTAWS_GETCONNECTORDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "getconnectordefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetConnectorDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetConnectorDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetConnectorDefinitionResponse(const GetConnectorDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConnectorDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectorDefinitionResponse)
    Q_DISABLE_COPY(GetConnectorDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
