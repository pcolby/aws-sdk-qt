// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPUTEENVIRONMENTRESPONSE_P_H
#define QTAWS_DELETECOMPUTEENVIRONMENTRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class DeleteComputeEnvironmentResponse;

class DeleteComputeEnvironmentResponsePrivate : public BatchResponsePrivate {

public:

    explicit DeleteComputeEnvironmentResponsePrivate(DeleteComputeEnvironmentResponse * const q);

    void parseDeleteComputeEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteComputeEnvironmentResponse)
    Q_DISABLE_COPY(DeleteComputeEnvironmentResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
