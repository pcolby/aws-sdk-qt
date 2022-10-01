// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATEALIASESRESPONSE_P_H
#define QTAWS_LISTTEMPLATEALIASESRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListTemplateAliasesResponse;

class ListTemplateAliasesResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListTemplateAliasesResponsePrivate(ListTemplateAliasesResponse * const q);

    void parseListTemplateAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTemplateAliasesResponse)
    Q_DISABLE_COPY(ListTemplateAliasesResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
