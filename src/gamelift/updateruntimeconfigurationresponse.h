// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERUNTIMECONFIGURATIONRESPONSE_H
#define QTAWS_UPDATERUNTIMECONFIGURATIONRESPONSE_H

#include "gameliftresponse.h"
#include "updateruntimeconfigurationrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateRuntimeConfigurationResponsePrivate;

class QTAWSGAMELIFT_EXPORT UpdateRuntimeConfigurationResponse : public GameLiftResponse {
    Q_OBJECT

public:
    UpdateRuntimeConfigurationResponse(const UpdateRuntimeConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRuntimeConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuntimeConfigurationResponse)
    Q_DISABLE_COPY(UpdateRuntimeConfigurationResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
