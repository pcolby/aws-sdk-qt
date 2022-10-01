// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVPCCIDRBLOCKRESPONSE_H
#define QTAWS_ASSOCIATEVPCCIDRBLOCKRESPONSE_H

#include "ec2response.h"
#include "associatevpccidrblockrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateVpcCidrBlockResponsePrivate;

class QTAWSEC2_EXPORT AssociateVpcCidrBlockResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateVpcCidrBlockResponse(const AssociateVpcCidrBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateVpcCidrBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateVpcCidrBlockResponse)
    Q_DISABLE_COPY(AssociateVpcCidrBlockResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
