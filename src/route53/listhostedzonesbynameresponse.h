// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESBYNAMERESPONSE_H
#define QTAWS_LISTHOSTEDZONESBYNAMERESPONSE_H

#include "route53response.h"
#include "listhostedzonesbynamerequest.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesByNameResponsePrivate;

class QTAWSROUTE53_EXPORT ListHostedZonesByNameResponse : public Route53Response {
    Q_OBJECT

public:
    ListHostedZonesByNameResponse(const ListHostedZonesByNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHostedZonesByNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHostedZonesByNameResponse)
    Q_DISABLE_COPY(ListHostedZonesByNameResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
