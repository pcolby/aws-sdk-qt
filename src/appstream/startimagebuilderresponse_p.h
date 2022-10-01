// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMAGEBUILDERRESPONSE_P_H
#define QTAWS_STARTIMAGEBUILDERRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class StartImageBuilderResponse;

class StartImageBuilderResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit StartImageBuilderResponsePrivate(StartImageBuilderResponse * const q);

    void parseStartImageBuilderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartImageBuilderResponse)
    Q_DISABLE_COPY(StartImageBuilderResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
