// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOBSERVABILITYCONFIGURATIONREQUEST_H
#define QTAWS_CREATEOBSERVABILITYCONFIGURATIONREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class CreateObservabilityConfigurationRequestPrivate;

class QTAWSAPPRUNNER_EXPORT CreateObservabilityConfigurationRequest : public AppRunnerRequest {

public:
    CreateObservabilityConfigurationRequest(const CreateObservabilityConfigurationRequest &other);
    CreateObservabilityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateObservabilityConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
