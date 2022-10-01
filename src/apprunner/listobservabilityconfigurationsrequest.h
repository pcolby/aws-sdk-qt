// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBSERVABILITYCONFIGURATIONSREQUEST_H
#define QTAWS_LISTOBSERVABILITYCONFIGURATIONSREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class ListObservabilityConfigurationsRequestPrivate;

class QTAWSAPPRUNNER_EXPORT ListObservabilityConfigurationsRequest : public AppRunnerRequest {

public:
    ListObservabilityConfigurationsRequest(const ListObservabilityConfigurationsRequest &other);
    ListObservabilityConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObservabilityConfigurationsRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
