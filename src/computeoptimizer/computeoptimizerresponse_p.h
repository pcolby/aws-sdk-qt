// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPUTEOPTIMIZERRESPONSE_P_H
#define QTAWS_COMPUTEOPTIMIZERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class ComputeOptimizerResponse;

class ComputeOptimizerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ComputeOptimizerResponsePrivate(ComputeOptimizerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ComputeOptimizerResponse)
    Q_DISABLE_COPY(ComputeOptimizerResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
