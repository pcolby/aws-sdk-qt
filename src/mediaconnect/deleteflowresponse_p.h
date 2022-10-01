// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWRESPONSE_P_H
#define QTAWS_DELETEFLOWRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class DeleteFlowResponse;

class DeleteFlowResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit DeleteFlowResponsePrivate(DeleteFlowResponse * const q);

    void parseDeleteFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFlowResponse)
    Q_DISABLE_COPY(DeleteFlowResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
