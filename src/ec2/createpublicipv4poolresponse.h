// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICIPV4POOLRESPONSE_H
#define QTAWS_CREATEPUBLICIPV4POOLRESPONSE_H

#include "ec2response.h"
#include "createpublicipv4poolrequest.h"

namespace QtAws {
namespace Ec2 {

class CreatePublicIpv4PoolResponsePrivate;

class QTAWSEC2_EXPORT CreatePublicIpv4PoolResponse : public Ec2Response {
    Q_OBJECT

public:
    CreatePublicIpv4PoolResponse(const CreatePublicIpv4PoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePublicIpv4PoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePublicIpv4PoolResponse)
    Q_DISABLE_COPY(CreatePublicIpv4PoolResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
