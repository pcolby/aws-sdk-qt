// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTHINGSRESPONSE_H
#define QTAWS_SEARCHTHINGSRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "searchthingsrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchThingsResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT SearchThingsResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    SearchThingsResponse(const SearchThingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchThingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchThingsResponse)
    Q_DISABLE_COPY(SearchThingsResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
