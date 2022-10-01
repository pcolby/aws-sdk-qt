// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEVPCCIDRBLOCKRESPONSE_H
#define QTAWS_DISASSOCIATEVPCCIDRBLOCKRESPONSE_H

#include "ec2response.h"
#include "disassociatevpccidrblockrequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateVpcCidrBlockResponsePrivate;

class QTAWSEC2_EXPORT DisassociateVpcCidrBlockResponse : public Ec2Response {
    Q_OBJECT

public:
    DisassociateVpcCidrBlockResponse(const DisassociateVpcCidrBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateVpcCidrBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateVpcCidrBlockResponse)
    Q_DISABLE_COPY(DisassociateVpcCidrBlockResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
