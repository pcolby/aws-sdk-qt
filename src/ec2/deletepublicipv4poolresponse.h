// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLICIPV4POOLRESPONSE_H
#define QTAWS_DELETEPUBLICIPV4POOLRESPONSE_H

#include "ec2response.h"
#include "deletepublicipv4poolrequest.h"

namespace QtAws {
namespace Ec2 {

class DeletePublicIpv4PoolResponsePrivate;

class QTAWSEC2_EXPORT DeletePublicIpv4PoolResponse : public Ec2Response {
    Q_OBJECT

public:
    DeletePublicIpv4PoolResponse(const DeletePublicIpv4PoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePublicIpv4PoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePublicIpv4PoolResponse)
    Q_DISABLE_COPY(DeletePublicIpv4PoolResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
