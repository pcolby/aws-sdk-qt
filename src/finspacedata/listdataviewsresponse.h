// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAVIEWSRESPONSE_H
#define QTAWS_LISTDATAVIEWSRESPONSE_H

#include "finspacedataresponse.h"
#include "listdataviewsrequest.h"

namespace QtAws {
namespace FinspaceData {

class ListDataViewsResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT ListDataViewsResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    ListDataViewsResponse(const ListDataViewsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataViewsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataViewsResponse)
    Q_DISABLE_COPY(ListDataViewsResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
