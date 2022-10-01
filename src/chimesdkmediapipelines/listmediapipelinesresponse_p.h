// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDIAPIPELINESRESPONSE_P_H
#define QTAWS_LISTMEDIAPIPELINESRESPONSE_P_H

#include "chimesdkmediapipelinesresponse_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ListMediaPipelinesResponse;

class ListMediaPipelinesResponsePrivate : public ChimeSdkMediaPipelinesResponsePrivate {

public:

    explicit ListMediaPipelinesResponsePrivate(ListMediaPipelinesResponse * const q);

    void parseListMediaPipelinesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMediaPipelinesResponse)
    Q_DISABLE_COPY(ListMediaPipelinesResponsePrivate)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
