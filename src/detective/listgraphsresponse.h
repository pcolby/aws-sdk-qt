// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGRAPHSRESPONSE_H
#define QTAWS_LISTGRAPHSRESPONSE_H

#include "detectiveresponse.h"
#include "listgraphsrequest.h"

namespace QtAws {
namespace Detective {

class ListGraphsResponsePrivate;

class QTAWSDETECTIVE_EXPORT ListGraphsResponse : public DetectiveResponse {
    Q_OBJECT

public:
    ListGraphsResponse(const ListGraphsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGraphsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGraphsResponse)
    Q_DISABLE_COPY(ListGraphsResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
