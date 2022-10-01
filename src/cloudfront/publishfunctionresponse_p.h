// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHFUNCTIONRESPONSE_P_H
#define QTAWS_PUBLISHFUNCTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class PublishFunctionResponse;

class PublishFunctionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit PublishFunctionResponsePrivate(PublishFunctionResponse * const q);

    void parsePublishFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PublishFunctionResponse)
    Q_DISABLE_COPY(PublishFunctionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
