// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDSTACKSRESPONSE_H
#define QTAWS_LISTASSOCIATEDSTACKSRESPONSE_H

#include "appstreamresponse.h"
#include "listassociatedstacksrequest.h"

namespace QtAws {
namespace AppStream {

class ListAssociatedStacksResponsePrivate;

class QTAWSAPPSTREAM_EXPORT ListAssociatedStacksResponse : public AppStreamResponse {
    Q_OBJECT

public:
    ListAssociatedStacksResponse(const ListAssociatedStacksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssociatedStacksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedStacksResponse)
    Q_DISABLE_COPY(ListAssociatedStacksResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
