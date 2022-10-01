// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWSOURCERESPONSE_P_H
#define QTAWS_UPDATEFLOWSOURCERESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowSourceResponse;

class UpdateFlowSourceResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit UpdateFlowSourceResponsePrivate(UpdateFlowSourceResponse * const q);

    void parseUpdateFlowSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFlowSourceResponse)
    Q_DISABLE_COPY(UpdateFlowSourceResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
