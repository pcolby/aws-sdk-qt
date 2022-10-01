// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSRESPONSE_H
#define QTAWS_LISTDATASETSRESPONSE_H

#include "quicksightresponse.h"
#include "listdatasetsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListDataSetsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListDataSetsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListDataSetsResponse(const ListDataSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSetsResponse)
    Q_DISABLE_COPY(ListDataSetsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
