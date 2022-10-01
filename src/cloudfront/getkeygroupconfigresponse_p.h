// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYGROUPCONFIGRESPONSE_P_H
#define QTAWS_GETKEYGROUPCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetKeyGroupConfigResponse;

class GetKeyGroupConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetKeyGroupConfigResponsePrivate(GetKeyGroupConfigResponse * const q);

    void parseGetKeyGroupConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetKeyGroupConfigResponse)
    Q_DISABLE_COPY(GetKeyGroupConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
