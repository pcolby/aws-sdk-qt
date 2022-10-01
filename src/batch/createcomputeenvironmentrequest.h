// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPUTEENVIRONMENTREQUEST_H
#define QTAWS_CREATECOMPUTEENVIRONMENTREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class CreateComputeEnvironmentRequestPrivate;

class QTAWSBATCH_EXPORT CreateComputeEnvironmentRequest : public BatchRequest {

public:
    CreateComputeEnvironmentRequest(const CreateComputeEnvironmentRequest &other);
    CreateComputeEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateComputeEnvironmentRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
