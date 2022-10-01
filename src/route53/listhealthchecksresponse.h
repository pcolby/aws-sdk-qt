// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHEALTHCHECKSRESPONSE_H
#define QTAWS_LISTHEALTHCHECKSRESPONSE_H

#include "route53response.h"
#include "listhealthchecksrequest.h"

namespace QtAws {
namespace Route53 {

class ListHealthChecksResponsePrivate;

class QTAWSROUTE53_EXPORT ListHealthChecksResponse : public Route53Response {
    Q_OBJECT

public:
    ListHealthChecksResponse(const ListHealthChecksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHealthChecksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHealthChecksResponse)
    Q_DISABLE_COPY(ListHealthChecksResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
