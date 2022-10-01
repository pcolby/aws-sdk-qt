// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEROUTETABLERESPONSE_H
#define QTAWS_DISASSOCIATEROUTETABLERESPONSE_H

#include "ec2response.h"
#include "disassociateroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateRouteTableResponsePrivate;

class QTAWSEC2_EXPORT DisassociateRouteTableResponse : public Ec2Response {
    Q_OBJECT

public:
    DisassociateRouteTableResponse(const DisassociateRouteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateRouteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateRouteTableResponse)
    Q_DISABLE_COPY(DisassociateRouteTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
