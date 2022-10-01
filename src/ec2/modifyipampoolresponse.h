// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMPOOLRESPONSE_H
#define QTAWS_MODIFYIPAMPOOLRESPONSE_H

#include "ec2response.h"
#include "modifyipampoolrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamPoolResponsePrivate;

class QTAWSEC2_EXPORT ModifyIpamPoolResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyIpamPoolResponse(const ModifyIpamPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyIpamPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyIpamPoolResponse)
    Q_DISABLE_COPY(ModifyIpamPoolResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
