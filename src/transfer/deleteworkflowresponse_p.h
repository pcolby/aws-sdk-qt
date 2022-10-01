// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKFLOWRESPONSE_P_H
#define QTAWS_DELETEWORKFLOWRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DeleteWorkflowResponse;

class DeleteWorkflowResponsePrivate : public TransferResponsePrivate {

public:

    explicit DeleteWorkflowResponsePrivate(DeleteWorkflowResponse * const q);

    void parseDeleteWorkflowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkflowResponse)
    Q_DISABLE_COPY(DeleteWorkflowResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
