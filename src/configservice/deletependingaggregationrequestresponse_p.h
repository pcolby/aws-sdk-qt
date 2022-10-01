// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPENDINGAGGREGATIONREQUESTRESPONSE_P_H
#define QTAWS_DELETEPENDINGAGGREGATIONREQUESTRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeletePendingAggregationRequestResponse;

class DeletePendingAggregationRequestResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeletePendingAggregationRequestResponsePrivate(DeletePendingAggregationRequestResponse * const q);

    void parseDeletePendingAggregationRequestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePendingAggregationRequestResponse)
    Q_DISABLE_COPY(DeletePendingAggregationRequestResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
