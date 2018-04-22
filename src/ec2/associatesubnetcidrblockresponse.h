/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ASSOCIATESUBNETCIDRBLOCKRESPONSE_H
#define QTAWS_ASSOCIATESUBNETCIDRBLOCKRESPONSE_H

#include "ec2response.h"
#include "associatesubnetcidrblockrequest.h"

namespace QtAws {
namespace EC2 {

class AssociateSubnetCidrBlockResponsePrivate;

class QTAWS_EXPORT AssociateSubnetCidrBlockResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateSubnetCidrBlockResponse(const AssociateSubnetCidrBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateSubnetCidrBlockRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(AssociateSubnetCidrBlockResponse)
    Q_DISABLE_COPY(AssociateSubnetCidrBlockResponse)

};

} // namespace EC2
} // namespace QtAws

#endif
