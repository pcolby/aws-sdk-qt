// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPBLOCKRESPONSE_P_H
#define QTAWS_DELETEAPPBLOCKRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DeleteAppBlockResponse;

class DeleteAppBlockResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DeleteAppBlockResponsePrivate(DeleteAppBlockResponse * const q);

    void parseDeleteAppBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppBlockResponse)
    Q_DISABLE_COPY(DeleteAppBlockResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
