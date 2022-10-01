// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATEALIASRESPONSE_P_H
#define QTAWS_DELETETEMPLATEALIASRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteTemplateAliasResponse;

class DeleteTemplateAliasResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteTemplateAliasResponsePrivate(DeleteTemplateAliasResponse * const q);

    void parseDeleteTemplateAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTemplateAliasResponse)
    Q_DISABLE_COPY(DeleteTemplateAliasResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
