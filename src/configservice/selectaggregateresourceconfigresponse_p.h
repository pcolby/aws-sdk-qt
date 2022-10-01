// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTAGGREGATERESOURCECONFIGRESPONSE_P_H
#define QTAWS_SELECTAGGREGATERESOURCECONFIGRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class SelectAggregateResourceConfigResponse;

class SelectAggregateResourceConfigResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit SelectAggregateResourceConfigResponsePrivate(SelectAggregateResourceConfigResponse * const q);

    void parseSelectAggregateResourceConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SelectAggregateResourceConfigResponse)
    Q_DISABLE_COPY(SelectAggregateResourceConfigResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
