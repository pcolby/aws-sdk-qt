// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREALTIMEENDPOINTRESPONSE_P_H
#define QTAWS_DELETEREALTIMEENDPOINTRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class DeleteRealtimeEndpointResponse;

class DeleteRealtimeEndpointResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit DeleteRealtimeEndpointResponsePrivate(DeleteRealtimeEndpointResponse * const q);

    void parseDeleteRealtimeEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRealtimeEndpointResponse)
    Q_DISABLE_COPY(DeleteRealtimeEndpointResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
