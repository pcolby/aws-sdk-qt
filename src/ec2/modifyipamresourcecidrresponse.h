// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMRESOURCECIDRRESPONSE_H
#define QTAWS_MODIFYIPAMRESOURCECIDRRESPONSE_H

#include "ec2response.h"
#include "modifyipamresourcecidrrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamResourceCidrResponsePrivate;

class QTAWSEC2_EXPORT ModifyIpamResourceCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyIpamResourceCidrResponse(const ModifyIpamResourceCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyIpamResourceCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyIpamResourceCidrResponse)
    Q_DISABLE_COPY(ModifyIpamResourceCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
