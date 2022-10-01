// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGIMAGERESPONSE_P_H
#define QTAWS_CREATESTREAMINGIMAGERESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class CreateStreamingImageResponse;

class CreateStreamingImageResponsePrivate : public NimbleResponsePrivate {

public:

    explicit CreateStreamingImageResponsePrivate(CreateStreamingImageResponse * const q);

    void parseCreateStreamingImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStreamingImageResponse)
    Q_DISABLE_COPY(CreateStreamingImageResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
