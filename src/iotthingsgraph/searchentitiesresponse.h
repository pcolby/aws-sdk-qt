// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHENTITIESRESPONSE_H
#define QTAWS_SEARCHENTITIESRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "searchentitiesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchEntitiesResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT SearchEntitiesResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    SearchEntitiesResponse(const SearchEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchEntitiesResponse)
    Q_DISABLE_COPY(SearchEntitiesResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
