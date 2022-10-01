// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWSOURCESRESPONSE_P_H
#define QTAWS_ADDFLOWSOURCESRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowSourcesResponse;

class AddFlowSourcesResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit AddFlowSourcesResponsePrivate(AddFlowSourcesResponse * const q);

    void parseAddFlowSourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddFlowSourcesResponse)
    Q_DISABLE_COPY(AddFlowSourcesResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
