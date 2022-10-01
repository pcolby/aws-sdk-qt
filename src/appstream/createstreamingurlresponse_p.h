// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGURLRESPONSE_P_H
#define QTAWS_CREATESTREAMINGURLRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class CreateStreamingURLResponse;

class CreateStreamingURLResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit CreateStreamingURLResponsePrivate(CreateStreamingURLResponse * const q);

    void parseCreateStreamingURLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStreamingURLResponse)
    Q_DISABLE_COPY(CreateStreamingURLResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
