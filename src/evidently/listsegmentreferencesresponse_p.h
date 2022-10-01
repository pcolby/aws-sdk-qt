// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSEGMENTREFERENCESRESPONSE_P_H
#define QTAWS_LISTSEGMENTREFERENCESRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class ListSegmentReferencesResponse;

class ListSegmentReferencesResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit ListSegmentReferencesResponsePrivate(ListSegmentReferencesResponse * const q);

    void parseListSegmentReferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSegmentReferencesResponse)
    Q_DISABLE_COPY(ListSegmentReferencesResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
