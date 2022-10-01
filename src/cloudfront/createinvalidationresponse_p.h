// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINVALIDATIONRESPONSE_P_H
#define QTAWS_CREATEINVALIDATIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateInvalidationResponse;

class CreateInvalidationResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateInvalidationResponsePrivate(CreateInvalidationResponse * const q);

    void parseCreateInvalidationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInvalidationResponse)
    Q_DISABLE_COPY(CreateInvalidationResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
