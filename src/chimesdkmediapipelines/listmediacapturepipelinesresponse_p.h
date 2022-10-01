// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDIACAPTUREPIPELINESRESPONSE_P_H
#define QTAWS_LISTMEDIACAPTUREPIPELINESRESPONSE_P_H

#include "chimesdkmediapipelinesresponse_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ListMediaCapturePipelinesResponse;

class ListMediaCapturePipelinesResponsePrivate : public ChimeSdkMediaPipelinesResponsePrivate {

public:

    explicit ListMediaCapturePipelinesResponsePrivate(ListMediaCapturePipelinesResponse * const q);

    void parseListMediaCapturePipelinesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMediaCapturePipelinesResponse)
    Q_DISABLE_COPY(ListMediaCapturePipelinesResponsePrivate)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
