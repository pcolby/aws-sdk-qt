// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGSRESPONSE_H
#define QTAWS_LISTOFFERINGSRESPONSE_H

#include "mediaconnectresponse.h"
#include "listofferingsrequest.h"

namespace QtAws {
namespace MediaConnect {

class ListOfferingsResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT ListOfferingsResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    ListOfferingsResponse(const ListOfferingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOfferingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOfferingsResponse)
    Q_DISABLE_COPY(ListOfferingsResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
