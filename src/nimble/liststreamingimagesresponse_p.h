// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGIMAGESRESPONSE_P_H
#define QTAWS_LISTSTREAMINGIMAGESRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class ListStreamingImagesResponse;

class ListStreamingImagesResponsePrivate : public NimbleResponsePrivate {

public:

    explicit ListStreamingImagesResponsePrivate(ListStreamingImagesResponse * const q);

    void parseListStreamingImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStreamingImagesResponse)
    Q_DISABLE_COPY(ListStreamingImagesResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
