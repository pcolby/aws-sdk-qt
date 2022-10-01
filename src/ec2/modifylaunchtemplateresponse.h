// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLAUNCHTEMPLATERESPONSE_H
#define QTAWS_MODIFYLAUNCHTEMPLATERESPONSE_H

#include "ec2response.h"
#include "modifylaunchtemplaterequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyLaunchTemplateResponsePrivate;

class QTAWSEC2_EXPORT ModifyLaunchTemplateResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyLaunchTemplateResponse(const ModifyLaunchTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyLaunchTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyLaunchTemplateResponse)
    Q_DISABLE_COPY(ModifyLaunchTemplateResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
