// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUPPRESSEDDESTINATIONSRESPONSE_H
#define QTAWS_LISTSUPPRESSEDDESTINATIONSRESPONSE_H

#include "sesv2response.h"
#include "listsuppresseddestinationsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListSuppressedDestinationsResponsePrivate;

class QTAWSSESV2_EXPORT ListSuppressedDestinationsResponse : public SESv2Response {
    Q_OBJECT

public:
    ListSuppressedDestinationsResponse(const ListSuppressedDestinationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSuppressedDestinationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSuppressedDestinationsResponse)
    Q_DISABLE_COPY(ListSuppressedDestinationsResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
