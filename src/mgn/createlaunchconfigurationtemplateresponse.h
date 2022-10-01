// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHCONFIGURATIONTEMPLATERESPONSE_H
#define QTAWS_CREATELAUNCHCONFIGURATIONTEMPLATERESPONSE_H

#include "mgnresponse.h"
#include "createlaunchconfigurationtemplaterequest.h"

namespace QtAws {
namespace Mgn {

class CreateLaunchConfigurationTemplateResponsePrivate;

class QTAWSMGN_EXPORT CreateLaunchConfigurationTemplateResponse : public MgnResponse {
    Q_OBJECT

public:
    CreateLaunchConfigurationTemplateResponse(const CreateLaunchConfigurationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLaunchConfigurationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchConfigurationTemplateResponse)
    Q_DISABLE_COPY(CreateLaunchConfigurationTemplateResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
