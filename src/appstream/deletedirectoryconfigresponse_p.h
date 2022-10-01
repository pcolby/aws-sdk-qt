// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTORYCONFIGRESPONSE_P_H
#define QTAWS_DELETEDIRECTORYCONFIGRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DeleteDirectoryConfigResponse;

class DeleteDirectoryConfigResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DeleteDirectoryConfigResponsePrivate(DeleteDirectoryConfigResponse * const q);

    void parseDeleteDirectoryConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDirectoryConfigResponse)
    Q_DISABLE_COPY(DeleteDirectoryConfigResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
