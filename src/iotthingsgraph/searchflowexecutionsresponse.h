// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFLOWEXECUTIONSRESPONSE_H
#define QTAWS_SEARCHFLOWEXECUTIONSRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "searchflowexecutionsrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchFlowExecutionsResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT SearchFlowExecutionsResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    SearchFlowExecutionsResponse(const SearchFlowExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchFlowExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchFlowExecutionsResponse)
    Q_DISABLE_COPY(SearchFlowExecutionsResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
