// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPUTEENVIRONMENTRESPONSE_H
#define QTAWS_CREATECOMPUTEENVIRONMENTRESPONSE_H

#include "batchresponse.h"
#include "createcomputeenvironmentrequest.h"

namespace QtAws {
namespace Batch {

class CreateComputeEnvironmentResponsePrivate;

class QTAWSBATCH_EXPORT CreateComputeEnvironmentResponse : public BatchResponse {
    Q_OBJECT

public:
    CreateComputeEnvironmentResponse(const CreateComputeEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateComputeEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateComputeEnvironmentResponse)
    Q_DISABLE_COPY(CreateComputeEnvironmentResponse)

};

} // namespace Batch
} // namespace QtAws

#endif
