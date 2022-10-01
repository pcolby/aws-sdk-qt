// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEPERMISSIONSRESPONSE_P_H
#define QTAWS_DELETEIMAGEPERMISSIONSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DeleteImagePermissionsResponse;

class DeleteImagePermissionsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DeleteImagePermissionsResponsePrivate(DeleteImagePermissionsResponse * const q);

    void parseDeleteImagePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteImagePermissionsResponse)
    Q_DISABLE_COPY(DeleteImagePermissionsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
