// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEDEFINITIONRESPONSE_H
#define QTAWS_CREATEDEVICEDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "createdevicedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateDeviceDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateDeviceDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateDeviceDefinitionResponse(const CreateDeviceDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeviceDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeviceDefinitionResponse)
    Q_DISABLE_COPY(CreateDeviceDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
