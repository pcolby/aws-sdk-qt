// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONEMBEDURLRESPONSE_P_H
#define QTAWS_GETSESSIONEMBEDURLRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class GetSessionEmbedUrlResponse;

class GetSessionEmbedUrlResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit GetSessionEmbedUrlResponsePrivate(GetSessionEmbedUrlResponse * const q);

    void parseGetSessionEmbedUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSessionEmbedUrlResponse)
    Q_DISABLE_COPY(GetSessionEmbedUrlResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
