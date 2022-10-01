// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSEGMENTSRESPONSE_P_H
#define QTAWS_LISTSEGMENTSRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class ListSegmentsResponse;

class ListSegmentsResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit ListSegmentsResponsePrivate(ListSegmentsResponse * const q);

    void parseListSegmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSegmentsResponse)
    Q_DISABLE_COPY(ListSegmentsResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
