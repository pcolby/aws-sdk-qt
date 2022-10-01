// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTORYCONFIGRESPONSE_P_H
#define QTAWS_UPDATEDIRECTORYCONFIGRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class UpdateDirectoryConfigResponse;

class UpdateDirectoryConfigResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit UpdateDirectoryConfigResponsePrivate(UpdateDirectoryConfigResponse * const q);

    void parseUpdateDirectoryConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDirectoryConfigResponse)
    Q_DISABLE_COPY(UpdateDirectoryConfigResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
