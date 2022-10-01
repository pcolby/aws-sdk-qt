// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGERDEFINITIONRESPONSE_H
#define QTAWS_CREATELOGGERDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "createloggerdefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateLoggerDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateLoggerDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateLoggerDefinitionResponse(const CreateLoggerDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLoggerDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoggerDefinitionResponse)
    Q_DISABLE_COPY(CreateLoggerDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
