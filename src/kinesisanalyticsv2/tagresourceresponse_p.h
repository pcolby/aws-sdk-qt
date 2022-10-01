// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCERESPONSE_P_H
#define QTAWS_TAGRESOURCERESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class TagResourceResponse;

class TagResourceResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit TagResourceResponsePrivate(TagResourceResponse * const q);

    void parseTagResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagResourceResponse)
    Q_DISABLE_COPY(TagResourceResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
