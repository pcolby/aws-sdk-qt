// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPARTITIONREQUEST_H
#define QTAWS_BATCHGETPARTITIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchGetPartitionRequestPrivate;

class QTAWSGLUE_EXPORT BatchGetPartitionRequest : public GlueRequest {

public:
    BatchGetPartitionRequest(const BatchGetPartitionRequest &other);
    BatchGetPartitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetPartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
