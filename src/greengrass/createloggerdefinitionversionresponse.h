// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGERDEFINITIONVERSIONRESPONSE_H
#define QTAWS_CREATELOGGERDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "createloggerdefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateLoggerDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateLoggerDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateLoggerDefinitionVersionResponse(const CreateLoggerDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLoggerDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoggerDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateLoggerDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
