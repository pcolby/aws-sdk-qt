// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEPARTITIONREQUEST_H
#define QTAWS_BATCHUPDATEPARTITIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchUpdatePartitionRequestPrivate;

class QTAWSGLUE_EXPORT BatchUpdatePartitionRequest : public GlueRequest {

public:
    BatchUpdatePartitionRequest(const BatchUpdatePartitionRequest &other);
    BatchUpdatePartitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdatePartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
