// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPUTEENVIRONMENTREQUEST_H
#define QTAWS_UPDATECOMPUTEENVIRONMENTREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class UpdateComputeEnvironmentRequestPrivate;

class QTAWSBATCH_EXPORT UpdateComputeEnvironmentRequest : public BatchRequest {

public:
    UpdateComputeEnvironmentRequest(const UpdateComputeEnvironmentRequest &other);
    UpdateComputeEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateComputeEnvironmentRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
