// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBSERVABILITYCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTOBSERVABILITYCONFIGURATIONSRESPONSE_H

#include "apprunnerresponse.h"
#include "listobservabilityconfigurationsrequest.h"

namespace QtAws {
namespace AppRunner {

class ListObservabilityConfigurationsResponsePrivate;

class QTAWSAPPRUNNER_EXPORT ListObservabilityConfigurationsResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    ListObservabilityConfigurationsResponse(const ListObservabilityConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListObservabilityConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObservabilityConfigurationsResponse)
    Q_DISABLE_COPY(ListObservabilityConfigurationsResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
