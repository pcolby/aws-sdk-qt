// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETAGGREGATERESOURCECONFIGRESPONSE_P_H
#define QTAWS_BATCHGETAGGREGATERESOURCECONFIGRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class BatchGetAggregateResourceConfigResponse;

class BatchGetAggregateResourceConfigResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit BatchGetAggregateResourceConfigResponsePrivate(BatchGetAggregateResourceConfigResponse * const q);

    void parseBatchGetAggregateResourceConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetAggregateResourceConfigResponse)
    Q_DISABLE_COPY(BatchGetAggregateResourceConfigResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
