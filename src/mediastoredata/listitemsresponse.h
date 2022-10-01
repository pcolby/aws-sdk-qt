// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTITEMSRESPONSE_H
#define QTAWS_LISTITEMSRESPONSE_H

#include "mediastoredataresponse.h"
#include "listitemsrequest.h"

namespace QtAws {
namespace MediaStoreData {

class ListItemsResponsePrivate;

class QTAWSMEDIASTOREDATA_EXPORT ListItemsResponse : public MediaStoreDataResponse {
    Q_OBJECT

public:
    ListItemsResponse(const ListItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListItemsResponse)
    Q_DISABLE_COPY(ListItemsResponse)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
