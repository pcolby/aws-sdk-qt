// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOREDEFINITIONRESPONSE_H
#define QTAWS_CREATECOREDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "createcoredefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateCoreDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateCoreDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateCoreDefinitionResponse(const CreateCoreDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCoreDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCoreDefinitionResponse)
    Q_DISABLE_COPY(CreateCoreDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
