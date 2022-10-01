// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOBSERVABILITYCONFIGURATIONRESPONSE_H
#define QTAWS_CREATEOBSERVABILITYCONFIGURATIONRESPONSE_H

#include "apprunnerresponse.h"
#include "createobservabilityconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class CreateObservabilityConfigurationResponsePrivate;

class QTAWSAPPRUNNER_EXPORT CreateObservabilityConfigurationResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    CreateObservabilityConfigurationResponse(const CreateObservabilityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateObservabilityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateObservabilityConfigurationResponse)
    Q_DISABLE_COPY(CreateObservabilityConfigurationResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
