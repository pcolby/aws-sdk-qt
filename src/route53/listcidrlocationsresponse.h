// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCIDRLOCATIONSRESPONSE_H
#define QTAWS_LISTCIDRLOCATIONSRESPONSE_H

#include "route53response.h"
#include "listcidrlocationsrequest.h"

namespace QtAws {
namespace Route53 {

class ListCidrLocationsResponsePrivate;

class QTAWSROUTE53_EXPORT ListCidrLocationsResponse : public Route53Response {
    Q_OBJECT

public:
    ListCidrLocationsResponse(const ListCidrLocationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCidrLocationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCidrLocationsResponse)
    Q_DISABLE_COPY(ListCidrLocationsResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
