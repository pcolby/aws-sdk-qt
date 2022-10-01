// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEDEFINITIONVERSIONRESPONSE_H
#define QTAWS_CREATEDEVICEDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "createdevicedefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateDeviceDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateDeviceDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateDeviceDefinitionVersionResponse(const CreateDeviceDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeviceDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeviceDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateDeviceDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
