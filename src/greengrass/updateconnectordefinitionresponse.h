// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORDEFINITIONRESPONSE_H
#define QTAWS_UPDATECONNECTORDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "updateconnectordefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateConnectorDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT UpdateConnectorDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    UpdateConnectorDefinitionResponse(const UpdateConnectorDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConnectorDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectorDefinitionResponse)
    Q_DISABLE_COPY(UpdateConnectorDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
