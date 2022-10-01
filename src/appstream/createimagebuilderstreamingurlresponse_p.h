// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEBUILDERSTREAMINGURLRESPONSE_P_H
#define QTAWS_CREATEIMAGEBUILDERSTREAMINGURLRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class CreateImageBuilderStreamingURLResponse;

class CreateImageBuilderStreamingURLResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit CreateImageBuilderStreamingURLResponsePrivate(CreateImageBuilderStreamingURLResponse * const q);

    void parseCreateImageBuilderStreamingURLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateImageBuilderStreamingURLResponse)
    Q_DISABLE_COPY(CreateImageBuilderStreamingURLResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
