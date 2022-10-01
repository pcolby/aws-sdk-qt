// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMEDIAPIPELINESRESPONSE_P_H
#define QTAWS_CHIMESDKMEDIAPIPELINESRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ChimeSdkMediaPipelinesResponse;

class ChimeSdkMediaPipelinesResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ChimeSdkMediaPipelinesResponsePrivate(ChimeSdkMediaPipelinesResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChimeSdkMediaPipelinesResponse)
    Q_DISABLE_COPY(ChimeSdkMediaPipelinesResponsePrivate)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
