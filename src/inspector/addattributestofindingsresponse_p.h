// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDATTRIBUTESTOFINDINGSRESPONSE_P_H
#define QTAWS_ADDATTRIBUTESTOFINDINGSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class AddAttributesToFindingsResponse;

class AddAttributesToFindingsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit AddAttributesToFindingsResponsePrivate(AddAttributesToFindingsResponse * const q);

    void parseAddAttributesToFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddAttributesToFindingsResponse)
    Q_DISABLE_COPY(AddAttributesToFindingsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
