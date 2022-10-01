// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERRESPONSE_P_H
#define QTAWS_SAGEMAKERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SageMaker {

class SageMakerResponse;

class SageMakerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SageMakerResponsePrivate(SageMakerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SageMakerResponse)
    Q_DISABLE_COPY(SageMakerResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
