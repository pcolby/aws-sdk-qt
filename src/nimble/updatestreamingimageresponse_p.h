// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMINGIMAGERESPONSE_P_H
#define QTAWS_UPDATESTREAMINGIMAGERESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class UpdateStreamingImageResponse;

class UpdateStreamingImageResponsePrivate : public NimbleResponsePrivate {

public:

    explicit UpdateStreamingImageResponsePrivate(UpdateStreamingImageResponse * const q);

    void parseUpdateStreamingImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStreamingImageResponse)
    Q_DISABLE_COPY(UpdateStreamingImageResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
