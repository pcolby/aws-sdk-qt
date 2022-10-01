// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAILSRESPONSE_P_H
#define QTAWS_LISTTRAILSRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class ListTrailsResponse;

class ListTrailsResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit ListTrailsResponsePrivate(ListTrailsResponse * const q);

    void parseListTrailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrailsResponse)
    Q_DISABLE_COPY(ListTrailsResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
