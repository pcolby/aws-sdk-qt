// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEDEFINITIONRESPONSE_H
#define QTAWS_UPDATEDEVICEDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "updatedevicedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateDeviceDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT UpdateDeviceDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    UpdateDeviceDefinitionResponse(const UpdateDeviceDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDeviceDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceDefinitionResponse)
    Q_DISABLE_COPY(UpdateDeviceDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
