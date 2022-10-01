// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONAGGREGATORRESPONSE_P_H
#define QTAWS_DELETECONFIGURATIONAGGREGATORRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigurationAggregatorResponse;

class DeleteConfigurationAggregatorResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteConfigurationAggregatorResponsePrivate(DeleteConfigurationAggregatorResponse * const q);

    void parseDeleteConfigurationAggregatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationAggregatorResponse)
    Q_DISABLE_COPY(DeleteConfigurationAggregatorResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
