// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGERDEFINITIONRESPONSE_H
#define QTAWS_GETLOGGERDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "getloggerdefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetLoggerDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetLoggerDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetLoggerDefinitionResponse(const GetLoggerDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLoggerDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoggerDefinitionResponse)
    Q_DISABLE_COPY(GetLoggerDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
