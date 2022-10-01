// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEDEFINITIONRESPONSE_H
#define QTAWS_GETDEVICEDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "getdevicedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetDeviceDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetDeviceDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetDeviceDefinitionResponse(const GetDeviceDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeviceDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceDefinitionResponse)
    Q_DISABLE_COPY(GetDeviceDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
