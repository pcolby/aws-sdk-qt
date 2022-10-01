// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTETABLERESPONSE_H
#define QTAWS_DELETEROUTETABLERESPONSE_H

#include "ec2response.h"
#include "deleteroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteRouteTableResponsePrivate;

class QTAWSEC2_EXPORT DeleteRouteTableResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteRouteTableResponse(const DeleteRouteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRouteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRouteTableResponse)
    Q_DISABLE_COPY(DeleteRouteTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
