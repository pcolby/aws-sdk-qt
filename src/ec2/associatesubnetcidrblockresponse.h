// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESUBNETCIDRBLOCKRESPONSE_H
#define QTAWS_ASSOCIATESUBNETCIDRBLOCKRESPONSE_H

#include "ec2response.h"
#include "associatesubnetcidrblockrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateSubnetCidrBlockResponsePrivate;

class QTAWSEC2_EXPORT AssociateSubnetCidrBlockResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateSubnetCidrBlockResponse(const AssociateSubnetCidrBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateSubnetCidrBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSubnetCidrBlockResponse)
    Q_DISABLE_COPY(AssociateSubnetCidrBlockResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
