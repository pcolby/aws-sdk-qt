// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSESRESPONSE_H
#define QTAWS_LISTLENSESRESPONSE_H

#include "wellarchitectedresponse.h"
#include "listlensesrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensesResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ListLensesResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ListLensesResponse(const ListLensesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLensesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLensesResponse)
    Q_DISABLE_COPY(ListLensesResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
