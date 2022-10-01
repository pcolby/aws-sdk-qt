// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWRESPONSE_P_H
#define QTAWS_DELETEFLOWRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class DeleteFlowResponse;

class DeleteFlowResponsePrivate : public AppflowResponsePrivate {

public:

    explicit DeleteFlowResponsePrivate(DeleteFlowResponse * const q);

    void parseDeleteFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFlowResponse)
    Q_DISABLE_COPY(DeleteFlowResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
