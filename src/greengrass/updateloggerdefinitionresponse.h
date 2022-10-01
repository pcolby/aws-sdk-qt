// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGGERDEFINITIONRESPONSE_H
#define QTAWS_UPDATELOGGERDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "updateloggerdefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateLoggerDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT UpdateLoggerDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    UpdateLoggerDefinitionResponse(const UpdateLoggerDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLoggerDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLoggerDefinitionResponse)
    Q_DISABLE_COPY(UpdateLoggerDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
