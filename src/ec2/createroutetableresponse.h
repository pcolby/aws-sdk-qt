// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTETABLERESPONSE_H
#define QTAWS_CREATEROUTETABLERESPONSE_H

#include "ec2response.h"
#include "createroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateRouteTableResponsePrivate;

class QTAWSEC2_EXPORT CreateRouteTableResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateRouteTableResponse(const CreateRouteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRouteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRouteTableResponse)
    Q_DISABLE_COPY(CreateRouteTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
