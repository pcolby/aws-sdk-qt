// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYPRIVATEDNSNAMEOPTIONSRESPONSE_H
#define QTAWS_MODIFYPRIVATEDNSNAMEOPTIONSRESPONSE_H

#include "ec2response.h"
#include "modifyprivatednsnameoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyPrivateDnsNameOptionsResponsePrivate;

class QTAWSEC2_EXPORT ModifyPrivateDnsNameOptionsResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyPrivateDnsNameOptionsResponse(const ModifyPrivateDnsNameOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyPrivateDnsNameOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyPrivateDnsNameOptionsResponse)
    Q_DISABLE_COPY(ModifyPrivateDnsNameOptionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
