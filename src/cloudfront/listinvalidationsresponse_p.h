// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVALIDATIONSRESPONSE_P_H
#define QTAWS_LISTINVALIDATIONSRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListInvalidationsResponse;

class ListInvalidationsResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListInvalidationsResponsePrivate(ListInvalidationsResponse * const q);

    void parseListInvalidationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInvalidationsResponse)
    Q_DISABLE_COPY(ListInvalidationsResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
