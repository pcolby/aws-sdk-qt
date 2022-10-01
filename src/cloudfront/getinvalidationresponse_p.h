// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVALIDATIONRESPONSE_P_H
#define QTAWS_GETINVALIDATIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetInvalidationResponse;

class GetInvalidationResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetInvalidationResponsePrivate(GetInvalidationResponse * const q);

    void parseGetInvalidationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInvalidationResponse)
    Q_DISABLE_COPY(GetInvalidationResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
