// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPAMPOOLRESPONSE_H
#define QTAWS_CREATEIPAMPOOLRESPONSE_H

#include "ec2response.h"
#include "createipampoolrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateIpamPoolResponsePrivate;

class QTAWSEC2_EXPORT CreateIpamPoolResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateIpamPoolResponse(const CreateIpamPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIpamPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIpamPoolResponse)
    Q_DISABLE_COPY(CreateIpamPoolResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
