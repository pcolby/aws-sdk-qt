// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSYSTEMINSTANCESRESPONSE_H
#define QTAWS_SEARCHSYSTEMINSTANCESRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "searchsysteminstancesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchSystemInstancesResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT SearchSystemInstancesResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    SearchSystemInstancesResponse(const SearchSystemInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchSystemInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSystemInstancesResponse)
    Q_DISABLE_COPY(SearchSystemInstancesResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
