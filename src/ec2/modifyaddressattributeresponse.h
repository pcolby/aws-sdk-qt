// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYADDRESSATTRIBUTERESPONSE_H
#define QTAWS_MODIFYADDRESSATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "modifyaddressattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyAddressAttributeResponsePrivate;

class QTAWSEC2_EXPORT ModifyAddressAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyAddressAttributeResponse(const ModifyAddressAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyAddressAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyAddressAttributeResponse)
    Q_DISABLE_COPY(ModifyAddressAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
