// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWSREQUEST_H
#define QTAWS_LISTWORKFLOWSREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class ListWorkflowsRequestPrivate;

class QTAWSTRANSFER_EXPORT ListWorkflowsRequest : public TransferRequest {

public:
    ListWorkflowsRequest(const ListWorkflowsRequest &other);
    ListWorkflowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkflowsRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
