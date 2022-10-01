// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONRESPONSE_P_H
#define QTAWS_UPDATEFUNCTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class UpdateFunctionResponse;

class UpdateFunctionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit UpdateFunctionResponsePrivate(UpdateFunctionResponse * const q);

    void parseUpdateFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionResponse)
    Q_DISABLE_COPY(UpdateFunctionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
