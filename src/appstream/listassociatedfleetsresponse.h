// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDFLEETSRESPONSE_H
#define QTAWS_LISTASSOCIATEDFLEETSRESPONSE_H

#include "appstreamresponse.h"
#include "listassociatedfleetsrequest.h"

namespace QtAws {
namespace AppStream {

class ListAssociatedFleetsResponsePrivate;

class QTAWSAPPSTREAM_EXPORT ListAssociatedFleetsResponse : public AppStreamResponse {
    Q_OBJECT

public:
    ListAssociatedFleetsResponse(const ListAssociatedFleetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssociatedFleetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedFleetsResponse)
    Q_DISABLE_COPY(ListAssociatedFleetsResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
