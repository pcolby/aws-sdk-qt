// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBSERVABILITYCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTOBSERVABILITYCONFIGURATIONSRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class ListObservabilityConfigurationsResponse;

class ListObservabilityConfigurationsResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit ListObservabilityConfigurationsResponsePrivate(ListObservabilityConfigurationsResponse * const q);

    void parseListObservabilityConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListObservabilityConfigurationsResponse)
    Q_DISABLE_COPY(ListObservabilityConfigurationsResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
