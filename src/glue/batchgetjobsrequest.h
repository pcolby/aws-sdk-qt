// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETJOBSREQUEST_H
#define QTAWS_BATCHGETJOBSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchGetJobsRequestPrivate;

class QTAWSGLUE_EXPORT BatchGetJobsRequest : public GlueRequest {

public:
    BatchGetJobsRequest(const BatchGetJobsRequest &other);
    BatchGetJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetJobsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
