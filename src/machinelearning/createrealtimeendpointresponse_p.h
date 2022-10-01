// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREALTIMEENDPOINTRESPONSE_P_H
#define QTAWS_CREATEREALTIMEENDPOINTRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class CreateRealtimeEndpointResponse;

class CreateRealtimeEndpointResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit CreateRealtimeEndpointResponsePrivate(CreateRealtimeEndpointResponse * const q);

    void parseCreateRealtimeEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRealtimeEndpointResponse)
    Q_DISABLE_COPY(CreateRealtimeEndpointResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
