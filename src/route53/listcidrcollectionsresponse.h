// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCIDRCOLLECTIONSRESPONSE_H
#define QTAWS_LISTCIDRCOLLECTIONSRESPONSE_H

#include "route53response.h"
#include "listcidrcollectionsrequest.h"

namespace QtAws {
namespace Route53 {

class ListCidrCollectionsResponsePrivate;

class QTAWSROUTE53_EXPORT ListCidrCollectionsResponse : public Route53Response {
    Q_OBJECT

public:
    ListCidrCollectionsResponse(const ListCidrCollectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCidrCollectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCidrCollectionsResponse)
    Q_DISABLE_COPY(ListCidrCollectionsResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
