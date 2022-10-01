// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHINGRUNTIMECONFIGURATIONRESPONSE_H
#define QTAWS_GETTHINGRUNTIMECONFIGURATIONRESPONSE_H

#include "greengrassresponse.h"
#include "getthingruntimeconfigurationrequest.h"

namespace QtAws {
namespace Greengrass {

class GetThingRuntimeConfigurationResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetThingRuntimeConfigurationResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetThingRuntimeConfigurationResponse(const GetThingRuntimeConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetThingRuntimeConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThingRuntimeConfigurationResponse)
    Q_DISABLE_COPY(GetThingRuntimeConfigurationResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
