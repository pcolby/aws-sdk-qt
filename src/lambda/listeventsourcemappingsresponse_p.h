// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSOURCEMAPPINGSRESPONSE_P_H
#define QTAWS_LISTEVENTSOURCEMAPPINGSRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class ListEventSourceMappingsResponse;

class ListEventSourceMappingsResponsePrivate : public LambdaResponsePrivate {

public:

    explicit ListEventSourceMappingsResponsePrivate(ListEventSourceMappingsResponse * const q);

    void parseListEventSourceMappingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventSourceMappingsResponse)
    Q_DISABLE_COPY(ListEventSourceMappingsResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
