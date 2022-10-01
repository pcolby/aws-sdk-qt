// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGSRESPONSE_H
#define QTAWS_LISTOFFERINGSRESPONSE_H

#include "devicefarmresponse.h"
#include "listofferingsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListOfferingsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListOfferingsResponse : public DeviceFarmResponse {
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

} // namespace DeviceFarm
} // namespace QtAws

#endif
