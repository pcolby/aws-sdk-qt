// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACEROUTETABLEASSOCIATIONRESPONSE_H
#define QTAWS_REPLACEROUTETABLEASSOCIATIONRESPONSE_H

#include "ec2response.h"
#include "replaceroutetableassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceRouteTableAssociationResponsePrivate;

class QTAWSEC2_EXPORT ReplaceRouteTableAssociationResponse : public Ec2Response {
    Q_OBJECT

public:
    ReplaceRouteTableAssociationResponse(const ReplaceRouteTableAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReplaceRouteTableAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceRouteTableAssociationResponse)
    Q_DISABLE_COPY(ReplaceRouteTableAssociationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
