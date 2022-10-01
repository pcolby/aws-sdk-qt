// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMEVERSIONSRESPONSE_H
#define QTAWS_LISTTHEMEVERSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "listthemeversionsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListThemeVersionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListThemeVersionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListThemeVersionsResponse(const ListThemeVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThemeVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThemeVersionsResponse)
    Q_DISABLE_COPY(ListThemeVersionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
