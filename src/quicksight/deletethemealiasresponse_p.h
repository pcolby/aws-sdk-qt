// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHEMEALIASRESPONSE_P_H
#define QTAWS_DELETETHEMEALIASRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteThemeAliasResponse;

class DeleteThemeAliasResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteThemeAliasResponsePrivate(DeleteThemeAliasResponse * const q);

    void parseDeleteThemeAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteThemeAliasResponse)
    Q_DISABLE_COPY(DeleteThemeAliasResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
