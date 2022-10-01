// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBSERVABILITYCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEOBSERVABILITYCONFIGURATIONRESPONSE_H

#include "apprunnerresponse.h"
#include "deleteobservabilityconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteObservabilityConfigurationResponsePrivate;

class QTAWSAPPRUNNER_EXPORT DeleteObservabilityConfigurationResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    DeleteObservabilityConfigurationResponse(const DeleteObservabilityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteObservabilityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObservabilityConfigurationResponse)
    Q_DISABLE_COPY(DeleteObservabilityConfigurationResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
