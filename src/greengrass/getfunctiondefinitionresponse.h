// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONDEFINITIONRESPONSE_H
#define QTAWS_GETFUNCTIONDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "getfunctiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetFunctionDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetFunctionDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetFunctionDefinitionResponse(const GetFunctionDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFunctionDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionDefinitionResponse)
    Q_DISABLE_COPY(GetFunctionDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
