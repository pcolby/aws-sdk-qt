// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHTEMPLATERESPONSE_H
#define QTAWS_DELETELAUNCHTEMPLATERESPONSE_H

#include "ec2response.h"
#include "deletelaunchtemplaterequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLaunchTemplateResponsePrivate;

class QTAWSEC2_EXPORT DeleteLaunchTemplateResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteLaunchTemplateResponse(const DeleteLaunchTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLaunchTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchTemplateResponse)
    Q_DISABLE_COPY(DeleteLaunchTemplateResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
