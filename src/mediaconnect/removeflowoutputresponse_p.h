// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWOUTPUTRESPONSE_P_H
#define QTAWS_REMOVEFLOWOUTPUTRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowOutputResponse;

class RemoveFlowOutputResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit RemoveFlowOutputResponsePrivate(RemoveFlowOutputResponse * const q);

    void parseRemoveFlowOutputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveFlowOutputResponse)
    Q_DISABLE_COPY(RemoveFlowOutputResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
