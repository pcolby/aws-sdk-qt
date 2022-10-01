// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERRUNTIMERESPONSE_P_H
#define QTAWS_SAGEMAKERRUNTIMERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SageMakerRuntime {

class SageMakerRuntimeResponse;

class SageMakerRuntimeResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SageMakerRuntimeResponsePrivate(SageMakerRuntimeResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SageMakerRuntimeResponse)
    Q_DISABLE_COPY(SageMakerRuntimeResponsePrivate)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif
