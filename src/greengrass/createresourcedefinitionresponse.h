// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDEFINITIONRESPONSE_H
#define QTAWS_CREATERESOURCEDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "createresourcedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateResourceDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateResourceDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateResourceDefinitionResponse(const CreateResourceDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResourceDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceDefinitionResponse)
    Q_DISABLE_COPY(CreateResourceDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
