// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEUSERRESPONSE_P_H
#define QTAWS_ENABLEUSERRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class EnableUserResponse;

class EnableUserResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit EnableUserResponsePrivate(EnableUserResponse * const q);

    void parseEnableUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableUserResponse)
    Q_DISABLE_COPY(EnableUserResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
