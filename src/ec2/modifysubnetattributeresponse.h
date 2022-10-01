// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSUBNETATTRIBUTERESPONSE_H
#define QTAWS_MODIFYSUBNETATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "modifysubnetattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifySubnetAttributeResponsePrivate;

class QTAWSEC2_EXPORT ModifySubnetAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifySubnetAttributeResponse(const ModifySubnetAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifySubnetAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySubnetAttributeResponse)
    Q_DISABLE_COPY(ModifySubnetAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
