// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATEVERSIONSRESPONSE_P_H
#define QTAWS_LISTTEMPLATEVERSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListTemplateVersionsResponse;

class ListTemplateVersionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListTemplateVersionsResponsePrivate(ListTemplateVersionsResponse * const q);

    void parseListTemplateVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTemplateVersionsResponse)
    Q_DISABLE_COPY(ListTemplateVersionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
