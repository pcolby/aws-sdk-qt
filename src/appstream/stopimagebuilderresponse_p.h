// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPIMAGEBUILDERRESPONSE_P_H
#define QTAWS_STOPIMAGEBUILDERRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class StopImageBuilderResponse;

class StopImageBuilderResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit StopImageBuilderResponsePrivate(StopImageBuilderResponse * const q);

    void parseStopImageBuilderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopImageBuilderResponse)
    Q_DISABLE_COPY(StopImageBuilderResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
