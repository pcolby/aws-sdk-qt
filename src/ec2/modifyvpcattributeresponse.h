// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCATTRIBUTERESPONSE_H
#define QTAWS_MODIFYVPCATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "modifyvpcattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcAttributeResponsePrivate;

class QTAWSEC2_EXPORT ModifyVpcAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVpcAttributeResponse(const ModifyVpcAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVpcAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpcAttributeResponse)
    Q_DISABLE_COPY(ModifyVpcAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
