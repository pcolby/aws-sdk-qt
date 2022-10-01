// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWSOURCERESPONSE_P_H
#define QTAWS_REMOVEFLOWSOURCERESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowSourceResponse;

class RemoveFlowSourceResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit RemoveFlowSourceResponsePrivate(RemoveFlowSourceResponse * const q);

    void parseRemoveFlowSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveFlowSourceResponse)
    Q_DISABLE_COPY(RemoveFlowSourceResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
