// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHTEMPLATERESPONSE_H
#define QTAWS_CREATELAUNCHTEMPLATERESPONSE_H

#include "ec2response.h"
#include "createlaunchtemplaterequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLaunchTemplateResponsePrivate;

class QTAWSEC2_EXPORT CreateLaunchTemplateResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateLaunchTemplateResponse(const CreateLaunchTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLaunchTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchTemplateResponse)
    Q_DISABLE_COPY(CreateLaunchTemplateResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
