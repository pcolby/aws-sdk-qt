// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPBLOCKRESPONSE_P_H
#define QTAWS_CREATEAPPBLOCKRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class CreateAppBlockResponse;

class CreateAppBlockResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit CreateAppBlockResponsePrivate(CreateAppBlockResponse * const q);

    void parseCreateAppBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAppBlockResponse)
    Q_DISABLE_COPY(CreateAppBlockResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
