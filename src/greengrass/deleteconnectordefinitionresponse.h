// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORDEFINITIONRESPONSE_H
#define QTAWS_DELETECONNECTORDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "deleteconnectordefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteConnectorDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT DeleteConnectorDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    DeleteConnectorDefinitionResponse(const DeleteConnectorDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConnectorDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectorDefinitionResponse)
    Q_DISABLE_COPY(DeleteConnectorDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
