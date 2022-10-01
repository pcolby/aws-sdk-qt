// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFLOWTEMPLATESRESPONSE_H
#define QTAWS_SEARCHFLOWTEMPLATESRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "searchflowtemplatesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchFlowTemplatesResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT SearchFlowTemplatesResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    SearchFlowTemplatesResponse(const SearchFlowTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchFlowTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchFlowTemplatesResponse)
    Q_DISABLE_COPY(SearchFlowTemplatesResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
