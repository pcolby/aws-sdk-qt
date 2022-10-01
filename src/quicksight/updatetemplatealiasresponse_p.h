// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEALIASRESPONSE_P_H
#define QTAWS_UPDATETEMPLATEALIASRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateTemplateAliasResponse;

class UpdateTemplateAliasResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateTemplateAliasResponsePrivate(UpdateTemplateAliasResponse * const q);

    void parseUpdateTemplateAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTemplateAliasResponse)
    Q_DISABLE_COPY(UpdateTemplateAliasResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
