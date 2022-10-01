// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVOLUMEATTRIBUTERESPONSE_H
#define QTAWS_MODIFYVOLUMEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "modifyvolumeattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVolumeAttributeResponsePrivate;

class QTAWSEC2_EXPORT ModifyVolumeAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVolumeAttributeResponse(const ModifyVolumeAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVolumeAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVolumeAttributeResponse)
    Q_DISABLE_COPY(ModifyVolumeAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
