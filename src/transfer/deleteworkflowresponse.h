// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKFLOWRESPONSE_H
#define QTAWS_DELETEWORKFLOWRESPONSE_H

#include "transferresponse.h"
#include "deleteworkflowrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteWorkflowResponsePrivate;

class QTAWSTRANSFER_EXPORT DeleteWorkflowResponse : public TransferResponse {
    Q_OBJECT

public:
    DeleteWorkflowResponse(const DeleteWorkflowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkflowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkflowResponse)
    Q_DISABLE_COPY(DeleteWorkflowResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
