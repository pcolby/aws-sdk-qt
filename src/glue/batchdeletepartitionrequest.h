// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEPARTITIONREQUEST_H
#define QTAWS_BATCHDELETEPARTITIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchDeletePartitionRequestPrivate;

class QTAWSGLUE_EXPORT BatchDeletePartitionRequest : public GlueRequest {

public:
    BatchDeletePartitionRequest(const BatchDeletePartitionRequest &other);
    BatchDeletePartitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeletePartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
