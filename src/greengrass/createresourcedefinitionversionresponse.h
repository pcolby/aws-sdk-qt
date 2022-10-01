// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDEFINITIONVERSIONRESPONSE_H
#define QTAWS_CREATERESOURCEDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "createresourcedefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateResourceDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateResourceDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateResourceDefinitionVersionResponse(const CreateResourceDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResourceDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateResourceDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
