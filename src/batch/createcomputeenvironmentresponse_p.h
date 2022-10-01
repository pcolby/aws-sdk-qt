// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPUTEENVIRONMENTRESPONSE_P_H
#define QTAWS_CREATECOMPUTEENVIRONMENTRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class CreateComputeEnvironmentResponse;

class CreateComputeEnvironmentResponsePrivate : public BatchResponsePrivate {

public:

    explicit CreateComputeEnvironmentResponsePrivate(CreateComputeEnvironmentResponse * const q);

    void parseCreateComputeEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateComputeEnvironmentResponse)
    Q_DISABLE_COPY(CreateComputeEnvironmentResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
