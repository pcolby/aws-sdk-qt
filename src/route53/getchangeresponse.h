// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGERESPONSE_H
#define QTAWS_GETCHANGERESPONSE_H

#include "route53response.h"
#include "getchangerequest.h"

namespace QtAws {
namespace Route53 {

class GetChangeResponsePrivate;

class QTAWSROUTE53_EXPORT GetChangeResponse : public Route53Response {
    Q_OBJECT

public:
    GetChangeResponse(const GetChangeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChangeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangeResponse)
    Q_DISABLE_COPY(GetChangeResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
