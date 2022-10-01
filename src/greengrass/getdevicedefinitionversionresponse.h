// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEDEFINITIONVERSIONRESPONSE_H
#define QTAWS_GETDEVICEDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "getdevicedefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetDeviceDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetDeviceDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetDeviceDefinitionVersionResponse(const GetDeviceDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeviceDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceDefinitionVersionResponse)
    Q_DISABLE_COPY(GetDeviceDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
