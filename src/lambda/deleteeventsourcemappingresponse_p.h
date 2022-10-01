// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSOURCEMAPPINGRESPONSE_P_H
#define QTAWS_DELETEEVENTSOURCEMAPPINGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class DeleteEventSourceMappingResponse;

class DeleteEventSourceMappingResponsePrivate : public LambdaResponsePrivate {

public:

    explicit DeleteEventSourceMappingResponsePrivate(DeleteEventSourceMappingResponse * const q);

    void parseDeleteEventSourceMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventSourceMappingResponse)
    Q_DISABLE_COPY(DeleteEventSourceMappingResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
