// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONAGGREGATORRESPONSE_P_H
#define QTAWS_PUTCONFIGURATIONAGGREGATORRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutConfigurationAggregatorResponse;

class PutConfigurationAggregatorResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutConfigurationAggregatorResponsePrivate(PutConfigurationAggregatorResponse * const q);

    void parsePutConfigurationAggregatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConfigurationAggregatorResponse)
    Q_DISABLE_COPY(PutConfigurationAggregatorResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
