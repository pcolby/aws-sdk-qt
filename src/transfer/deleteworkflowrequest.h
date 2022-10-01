// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKFLOWREQUEST_H
#define QTAWS_DELETEWORKFLOWREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteWorkflowRequestPrivate;

class QTAWSTRANSFER_EXPORT DeleteWorkflowRequest : public TransferRequest {

public:
    DeleteWorkflowRequest(const DeleteWorkflowRequest &other);
    DeleteWorkflowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkflowRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
