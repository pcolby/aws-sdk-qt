// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTORYCONFIGRESPONSE_P_H
#define QTAWS_CREATEDIRECTORYCONFIGRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class CreateDirectoryConfigResponse;

class CreateDirectoryConfigResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit CreateDirectoryConfigResponsePrivate(CreateDirectoryConfigResponse * const q);

    void parseCreateDirectoryConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDirectoryConfigResponse)
    Q_DISABLE_COPY(CreateDirectoryConfigResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
