// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPUTEENVIRONMENTRESPONSE_P_H
#define QTAWS_UPDATECOMPUTEENVIRONMENTRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class UpdateComputeEnvironmentResponse;

class UpdateComputeEnvironmentResponsePrivate : public BatchResponsePrivate {

public:

    explicit UpdateComputeEnvironmentResponsePrivate(UpdateComputeEnvironmentResponse * const q);

    void parseUpdateComputeEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateComputeEnvironmentResponse)
    Q_DISABLE_COPY(UpdateComputeEnvironmentResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
