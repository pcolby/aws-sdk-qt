// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEATTRIBUTESFROMFINDINGSRESPONSE_P_H
#define QTAWS_REMOVEATTRIBUTESFROMFINDINGSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class RemoveAttributesFromFindingsResponse;

class RemoveAttributesFromFindingsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit RemoveAttributesFromFindingsResponsePrivate(RemoveAttributesFromFindingsResponse * const q);

    void parseRemoveAttributesFromFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveAttributesFromFindingsResponse)
    Q_DISABLE_COPY(RemoveAttributesFromFindingsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
