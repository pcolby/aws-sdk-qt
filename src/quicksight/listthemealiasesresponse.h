// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMEALIASESRESPONSE_H
#define QTAWS_LISTTHEMEALIASESRESPONSE_H

#include "quicksightresponse.h"
#include "listthemealiasesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListThemeAliasesResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListThemeAliasesResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListThemeAliasesResponse(const ListThemeAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThemeAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThemeAliasesResponse)
    Q_DISABLE_COPY(ListThemeAliasesResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
