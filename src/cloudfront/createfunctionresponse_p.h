// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONRESPONSE_P_H
#define QTAWS_CREATEFUNCTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateFunctionResponse;

class CreateFunctionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateFunctionResponsePrivate(CreateFunctionResponse * const q);

    void parseCreateFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFunctionResponse)
    Q_DISABLE_COPY(CreateFunctionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
