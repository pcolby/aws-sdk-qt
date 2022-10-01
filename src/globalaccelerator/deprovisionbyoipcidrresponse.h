// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONBYOIPCIDRRESPONSE_H
#define QTAWS_DEPROVISIONBYOIPCIDRRESPONSE_H

#include "globalacceleratorresponse.h"
#include "deprovisionbyoipcidrrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeprovisionByoipCidrResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeprovisionByoipCidrResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DeprovisionByoipCidrResponse(const DeprovisionByoipCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeprovisionByoipCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprovisionByoipCidrResponse)
    Q_DISABLE_COPY(DeprovisionByoipCidrResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
