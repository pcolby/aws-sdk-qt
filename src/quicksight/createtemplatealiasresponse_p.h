// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATEALIASRESPONSE_P_H
#define QTAWS_CREATETEMPLATEALIASRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateTemplateAliasResponse;

class CreateTemplateAliasResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateTemplateAliasResponsePrivate(CreateTemplateAliasResponse * const q);

    void parseCreateTemplateAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTemplateAliasResponse)
    Q_DISABLE_COPY(CreateTemplateAliasResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
