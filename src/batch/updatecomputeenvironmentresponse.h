// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPUTEENVIRONMENTRESPONSE_H
#define QTAWS_UPDATECOMPUTEENVIRONMENTRESPONSE_H

#include "batchresponse.h"
#include "updatecomputeenvironmentrequest.h"

namespace QtAws {
namespace Batch {

class UpdateComputeEnvironmentResponsePrivate;

class QTAWSBATCH_EXPORT UpdateComputeEnvironmentResponse : public BatchResponse {
    Q_OBJECT

public:
    UpdateComputeEnvironmentResponse(const UpdateComputeEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateComputeEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateComputeEnvironmentResponse)
    Q_DISABLE_COPY(UpdateComputeEnvironmentResponse)

};

} // namespace Batch
} // namespace QtAws

#endif
