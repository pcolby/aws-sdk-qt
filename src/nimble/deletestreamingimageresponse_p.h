// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGIMAGERESPONSE_P_H
#define QTAWS_DELETESTREAMINGIMAGERESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class DeleteStreamingImageResponse;

class DeleteStreamingImageResponsePrivate : public NimbleResponsePrivate {

public:

    explicit DeleteStreamingImageResponsePrivate(DeleteStreamingImageResponse * const q);

    void parseDeleteStreamingImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStreamingImageResponse)
    Q_DISABLE_COPY(DeleteStreamingImageResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
