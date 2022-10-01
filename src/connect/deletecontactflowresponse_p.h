// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTFLOWRESPONSE_P_H
#define QTAWS_DELETECONTACTFLOWRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DeleteContactFlowResponse;

class DeleteContactFlowResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DeleteContactFlowResponsePrivate(DeleteContactFlowResponse * const q);

    void parseDeleteContactFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContactFlowResponse)
    Q_DISABLE_COPY(DeleteContactFlowResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
