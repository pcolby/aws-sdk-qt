// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTEDZONERESPONSE_H
#define QTAWS_DELETEHOSTEDZONERESPONSE_H

#include "route53response.h"
#include "deletehostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class DeleteHostedZoneResponsePrivate;

class QTAWSROUTE53_EXPORT DeleteHostedZoneResponse : public Route53Response {
    Q_OBJECT

public:
    DeleteHostedZoneResponse(const DeleteHostedZoneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHostedZoneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHostedZoneResponse)
    Q_DISABLE_COPY(DeleteHostedZoneResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
