// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINGESTIONSRESPONSE_P_H
#define QTAWS_LISTINGESTIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListIngestionsResponse;

class ListIngestionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListIngestionsResponsePrivate(ListIngestionsResponse * const q);

    void parseListIngestionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIngestionsResponse)
    Q_DISABLE_COPY(ListIngestionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
