// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEPERMISSIONSRESPONSE_P_H
#define QTAWS_UPDATEIMAGEPERMISSIONSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class UpdateImagePermissionsResponse;

class UpdateImagePermissionsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit UpdateImagePermissionsResponsePrivate(UpdateImagePermissionsResponse * const q);

    void parseUpdateImagePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateImagePermissionsResponse)
    Q_DISABLE_COPY(UpdateImagePermissionsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
