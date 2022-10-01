// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONDEFINITIONVERSIONRESPONSE_H
#define QTAWS_GETFUNCTIONDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "getfunctiondefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetFunctionDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetFunctionDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetFunctionDefinitionVersionResponse(const GetFunctionDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFunctionDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionDefinitionVersionResponse)
    Q_DISABLE_COPY(GetFunctionDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
