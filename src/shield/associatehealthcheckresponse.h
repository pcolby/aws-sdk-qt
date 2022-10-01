// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEHEALTHCHECKRESPONSE_H
#define QTAWS_ASSOCIATEHEALTHCHECKRESPONSE_H

#include "shieldresponse.h"
#include "associatehealthcheckrequest.h"

namespace QtAws {
namespace Shield {

class AssociateHealthCheckResponsePrivate;

class QTAWSSHIELD_EXPORT AssociateHealthCheckResponse : public ShieldResponse {
    Q_OBJECT

public:
    AssociateHealthCheckResponse(const AssociateHealthCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateHealthCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateHealthCheckResponse)
    Q_DISABLE_COPY(AssociateHealthCheckResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
