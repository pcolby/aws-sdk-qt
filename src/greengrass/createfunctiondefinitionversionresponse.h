// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONDEFINITIONVERSIONRESPONSE_H
#define QTAWS_CREATEFUNCTIONDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "createfunctiondefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateFunctionDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateFunctionDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateFunctionDefinitionVersionResponse(const CreateFunctionDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFunctionDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFunctionDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateFunctionDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
