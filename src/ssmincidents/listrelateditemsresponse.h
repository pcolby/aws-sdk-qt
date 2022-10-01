// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRELATEDITEMSRESPONSE_H
#define QTAWS_LISTRELATEDITEMSRESPONSE_H

#include "ssmincidentsresponse.h"
#include "listrelateditemsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListRelatedItemsResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT ListRelatedItemsResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    ListRelatedItemsResponse(const ListRelatedItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRelatedItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRelatedItemsResponse)
    Q_DISABLE_COPY(ListRelatedItemsResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
