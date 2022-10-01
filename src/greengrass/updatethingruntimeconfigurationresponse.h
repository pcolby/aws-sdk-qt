// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGRUNTIMECONFIGURATIONRESPONSE_H
#define QTAWS_UPDATETHINGRUNTIMECONFIGURATIONRESPONSE_H

#include "greengrassresponse.h"
#include "updatethingruntimeconfigurationrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateThingRuntimeConfigurationResponsePrivate;

class QTAWSGREENGRASS_EXPORT UpdateThingRuntimeConfigurationResponse : public GreengrassResponse {
    Q_OBJECT

public:
    UpdateThingRuntimeConfigurationResponse(const UpdateThingRuntimeConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateThingRuntimeConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThingRuntimeConfigurationResponse)
    Q_DISABLE_COPY(UpdateThingRuntimeConfigurationResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
