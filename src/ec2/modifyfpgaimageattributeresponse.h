// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYFPGAIMAGEATTRIBUTERESPONSE_H
#define QTAWS_MODIFYFPGAIMAGEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "modifyfpgaimageattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyFpgaImageAttributeResponsePrivate;

class QTAWSEC2_EXPORT ModifyFpgaImageAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyFpgaImageAttributeResponse(const ModifyFpgaImageAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyFpgaImageAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyFpgaImageAttributeResponse)
    Q_DISABLE_COPY(ModifyFpgaImageAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
