// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGENTITYRECOGNIZERRESPONSE_P_H
#define QTAWS_STOPTRAININGENTITYRECOGNIZERRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StopTrainingEntityRecognizerResponse;

class StopTrainingEntityRecognizerResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StopTrainingEntityRecognizerResponsePrivate(StopTrainingEntityRecognizerResponse * const q);

    void parseStopTrainingEntityRecognizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopTrainingEntityRecognizerResponse)
    Q_DISABLE_COPY(StopTrainingEntityRecognizerResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
