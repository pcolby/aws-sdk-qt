// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEHEALTHCHECKRESPONSE_H
#define QTAWS_DISASSOCIATEHEALTHCHECKRESPONSE_H

#include "shieldresponse.h"
#include "disassociatehealthcheckrequest.h"

namespace QtAws {
namespace Shield {

class DisassociateHealthCheckResponsePrivate;

class QTAWSSHIELD_EXPORT DisassociateHealthCheckResponse : public ShieldResponse {
    Q_OBJECT

public:
    DisassociateHealthCheckResponse(const DisassociateHealthCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateHealthCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateHealthCheckResponse)
    Q_DISABLE_COPY(DisassociateHealthCheckResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
