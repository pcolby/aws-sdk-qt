// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGESETSRESPONSE_H
#define QTAWS_LISTCHANGESETSRESPONSE_H

#include "finspacedataresponse.h"
#include "listchangesetsrequest.h"

namespace QtAws {
namespace FinspaceData {

class ListChangesetsResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT ListChangesetsResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    ListChangesetsResponse(const ListChangesetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChangesetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChangesetsResponse)
    Q_DISABLE_COPY(ListChangesetsResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
