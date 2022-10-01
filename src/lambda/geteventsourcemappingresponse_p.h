// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSOURCEMAPPINGRESPONSE_P_H
#define QTAWS_GETEVENTSOURCEMAPPINGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetEventSourceMappingResponse;

class GetEventSourceMappingResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetEventSourceMappingResponsePrivate(GetEventSourceMappingResponse * const q);

    void parseGetEventSourceMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventSourceMappingResponse)
    Q_DISABLE_COPY(GetEventSourceMappingResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
