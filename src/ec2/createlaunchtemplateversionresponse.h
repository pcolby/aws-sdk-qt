// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHTEMPLATEVERSIONRESPONSE_H
#define QTAWS_CREATELAUNCHTEMPLATEVERSIONRESPONSE_H

#include "ec2response.h"
#include "createlaunchtemplateversionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLaunchTemplateVersionResponsePrivate;

class QTAWSEC2_EXPORT CreateLaunchTemplateVersionResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateLaunchTemplateVersionResponse(const CreateLaunchTemplateVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLaunchTemplateVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchTemplateVersionResponse)
    Q_DISABLE_COPY(CreateLaunchTemplateVersionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
