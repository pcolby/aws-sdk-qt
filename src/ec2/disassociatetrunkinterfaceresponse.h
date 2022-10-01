// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRUNKINTERFACERESPONSE_H
#define QTAWS_DISASSOCIATETRUNKINTERFACERESPONSE_H

#include "ec2response.h"
#include "disassociatetrunkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTrunkInterfaceResponsePrivate;

class QTAWSEC2_EXPORT DisassociateTrunkInterfaceResponse : public Ec2Response {
    Q_OBJECT

public:
    DisassociateTrunkInterfaceResponse(const DisassociateTrunkInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateTrunkInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTrunkInterfaceResponse)
    Q_DISABLE_COPY(DisassociateTrunkInterfaceResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
