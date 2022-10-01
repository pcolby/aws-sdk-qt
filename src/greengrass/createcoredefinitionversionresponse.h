// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOREDEFINITIONVERSIONRESPONSE_H
#define QTAWS_CREATECOREDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "createcoredefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateCoreDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateCoreDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateCoreDefinitionVersionResponse(const CreateCoreDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCoreDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCoreDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateCoreDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
