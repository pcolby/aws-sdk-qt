// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTSOURCEMAPPINGRESPONSE_P_H
#define QTAWS_UPDATEEVENTSOURCEMAPPINGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class UpdateEventSourceMappingResponse;

class UpdateEventSourceMappingResponsePrivate : public LambdaResponsePrivate {

public:

    explicit UpdateEventSourceMappingResponsePrivate(UpdateEventSourceMappingResponse * const q);

    void parseUpdateEventSourceMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEventSourceMappingResponse)
    Q_DISABLE_COPY(UpdateEventSourceMappingResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
