// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTSOURCEMAPPINGRESPONSE_P_H
#define QTAWS_CREATEEVENTSOURCEMAPPINGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class CreateEventSourceMappingResponse;

class CreateEventSourceMappingResponsePrivate : public LambdaResponsePrivate {

public:

    explicit CreateEventSourceMappingResponsePrivate(CreateEventSourceMappingResponse * const q);

    void parseCreateEventSourceMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEventSourceMappingResponse)
    Q_DISABLE_COPY(CreateEventSourceMappingResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
