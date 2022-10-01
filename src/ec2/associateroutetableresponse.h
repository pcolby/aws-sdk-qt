// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEROUTETABLERESPONSE_H
#define QTAWS_ASSOCIATEROUTETABLERESPONSE_H

#include "ec2response.h"
#include "associateroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateRouteTableResponsePrivate;

class QTAWSEC2_EXPORT AssociateRouteTableResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateRouteTableResponse(const AssociateRouteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateRouteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateRouteTableResponse)
    Q_DISABLE_COPY(AssociateRouteTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
