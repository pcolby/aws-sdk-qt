// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGAGGREGATIONSRESPONSE_H
#define QTAWS_LISTFINDINGAGGREGATIONSRESPONSE_H

#include "inspector2response.h"
#include "listfindingaggregationsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListFindingAggregationsResponsePrivate;

class QTAWSINSPECTOR2_EXPORT ListFindingAggregationsResponse : public Inspector2Response {
    Q_OBJECT

public:
    ListFindingAggregationsResponse(const ListFindingAggregationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFindingAggregationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFindingAggregationsResponse)
    Q_DISABLE_COPY(ListFindingAggregationsResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
