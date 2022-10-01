// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEADDRESSRESPONSE_H
#define QTAWS_DISASSOCIATEADDRESSRESPONSE_H

#include "ec2response.h"
#include "disassociateaddressrequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateAddressResponsePrivate;

class QTAWSEC2_EXPORT DisassociateAddressResponse : public Ec2Response {
    Q_OBJECT

public:
    DisassociateAddressResponse(const DisassociateAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAddressResponse)
    Q_DISABLE_COPY(DisassociateAddressResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
