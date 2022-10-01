// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPUTEENVIRONMENTRESPONSE_H
#define QTAWS_DELETECOMPUTEENVIRONMENTRESPONSE_H

#include "batchresponse.h"
#include "deletecomputeenvironmentrequest.h"

namespace QtAws {
namespace Batch {

class DeleteComputeEnvironmentResponsePrivate;

class QTAWSBATCH_EXPORT DeleteComputeEnvironmentResponse : public BatchResponse {
    Q_OBJECT

public:
    DeleteComputeEnvironmentResponse(const DeleteComputeEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteComputeEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteComputeEnvironmentResponse)
    Q_DISABLE_COPY(DeleteComputeEnvironmentResponse)

};

} // namespace Batch
} // namespace QtAws

#endif
