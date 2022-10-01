// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPJOBRUNREQUEST_H
#define QTAWS_BATCHSTOPJOBRUNREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchStopJobRunRequestPrivate;

class QTAWSGLUE_EXPORT BatchStopJobRunRequest : public GlueRequest {

public:
    BatchStopJobRunRequest(const BatchStopJobRunRequest &other);
    BatchStopJobRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchStopJobRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
