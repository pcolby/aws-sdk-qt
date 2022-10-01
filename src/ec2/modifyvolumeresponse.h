// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVOLUMERESPONSE_H
#define QTAWS_MODIFYVOLUMERESPONSE_H

#include "ec2response.h"
#include "modifyvolumerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVolumeResponsePrivate;

class QTAWSEC2_EXPORT ModifyVolumeResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVolumeResponse(const ModifyVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVolumeResponse)
    Q_DISABLE_COPY(ModifyVolumeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
