// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGIMAGERESPONSE_P_H
#define QTAWS_GETSTREAMINGIMAGERESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class GetStreamingImageResponse;

class GetStreamingImageResponsePrivate : public NimbleResponsePrivate {

public:

    explicit GetStreamingImageResponsePrivate(GetStreamingImageResponse * const q);

    void parseGetStreamingImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStreamingImageResponse)
    Q_DISABLE_COPY(GetStreamingImageResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
