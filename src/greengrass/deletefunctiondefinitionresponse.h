// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONDEFINITIONRESPONSE_H
#define QTAWS_DELETEFUNCTIONDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "deletefunctiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteFunctionDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT DeleteFunctionDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    DeleteFunctionDefinitionResponse(const DeleteFunctionDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFunctionDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFunctionDefinitionResponse)
    Q_DISABLE_COPY(DeleteFunctionDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
