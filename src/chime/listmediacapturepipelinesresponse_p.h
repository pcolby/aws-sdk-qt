// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDIACAPTUREPIPELINESRESPONSE_P_H
#define QTAWS_LISTMEDIACAPTUREPIPELINESRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListMediaCapturePipelinesResponse;

class ListMediaCapturePipelinesResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListMediaCapturePipelinesResponsePrivate(ListMediaCapturePipelinesResponse * const q);

    void parseListMediaCapturePipelinesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMediaCapturePipelinesResponse)
    Q_DISABLE_COPY(ListMediaCapturePipelinesResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
