// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETWORKFLOWSREQUEST_H
#define QTAWS_BATCHGETWORKFLOWSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchGetWorkflowsRequestPrivate;

class QTAWSGLUE_EXPORT BatchGetWorkflowsRequest : public GlueRequest {

public:
    BatchGetWorkflowsRequest(const BatchGetWorkflowsRequest &other);
    BatchGetWorkflowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetWorkflowsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
