// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTEDZONERESPONSE_H
#define QTAWS_CREATEHOSTEDZONERESPONSE_H

#include "route53response.h"
#include "createhostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class CreateHostedZoneResponsePrivate;

class QTAWSROUTE53_EXPORT CreateHostedZoneResponse : public Route53Response {
    Q_OBJECT

public:
    CreateHostedZoneResponse(const CreateHostedZoneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHostedZoneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHostedZoneResponse)
    Q_DISABLE_COPY(CreateHostedZoneResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
