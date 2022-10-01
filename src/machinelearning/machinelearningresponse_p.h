// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACHINELEARNINGRESPONSE_P_H
#define QTAWS_MACHINELEARNINGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class MachineLearningResponse;

class MachineLearningResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MachineLearningResponsePrivate(MachineLearningResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MachineLearningResponse)
    Q_DISABLE_COPY(MachineLearningResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
