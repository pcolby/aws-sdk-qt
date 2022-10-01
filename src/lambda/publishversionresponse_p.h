// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHVERSIONRESPONSE_P_H
#define QTAWS_PUBLISHVERSIONRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class PublishVersionResponse;

class PublishVersionResponsePrivate : public LambdaResponsePrivate {

public:

    explicit PublishVersionResponsePrivate(PublishVersionResponse * const q);

    void parsePublishVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PublishVersionResponse)
    Q_DISABLE_COPY(PublishVersionResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
