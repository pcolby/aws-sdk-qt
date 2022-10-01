// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOSCALINGCONFIGURATIONRESPONSE_H
#define QTAWS_CREATEAUTOSCALINGCONFIGURATIONRESPONSE_H

#include "apprunnerresponse.h"
#include "createautoscalingconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class CreateAutoScalingConfigurationResponsePrivate;

class QTAWSAPPRUNNER_EXPORT CreateAutoScalingConfigurationResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    CreateAutoScalingConfigurationResponse(const CreateAutoScalingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAutoScalingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAutoScalingConfigurationResponse)
    Q_DISABLE_COPY(CreateAutoScalingConfigurationResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
