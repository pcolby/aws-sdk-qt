// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHCONFIGURATIONTEMPLATERESPONSE_H
#define QTAWS_UPDATELAUNCHCONFIGURATIONTEMPLATERESPONSE_H

#include "mgnresponse.h"
#include "updatelaunchconfigurationtemplaterequest.h"

namespace QtAws {
namespace Mgn {

class UpdateLaunchConfigurationTemplateResponsePrivate;

class QTAWSMGN_EXPORT UpdateLaunchConfigurationTemplateResponse : public MgnResponse {
    Q_OBJECT

public:
    UpdateLaunchConfigurationTemplateResponse(const UpdateLaunchConfigurationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLaunchConfigurationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLaunchConfigurationTemplateResponse)
    Q_DISABLE_COPY(UpdateLaunchConfigurationTemplateResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
