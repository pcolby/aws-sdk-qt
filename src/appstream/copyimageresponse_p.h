// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYIMAGERESPONSE_P_H
#define QTAWS_COPYIMAGERESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class CopyImageResponse;

class CopyImageResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit CopyImageResponsePrivate(CopyImageResponse * const q);

    void parseCopyImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyImageResponse)
    Q_DISABLE_COPY(CopyImageResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
