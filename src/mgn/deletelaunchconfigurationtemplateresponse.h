// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHCONFIGURATIONTEMPLATERESPONSE_H
#define QTAWS_DELETELAUNCHCONFIGURATIONTEMPLATERESPONSE_H

#include "mgnresponse.h"
#include "deletelaunchconfigurationtemplaterequest.h"

namespace QtAws {
namespace Mgn {

class DeleteLaunchConfigurationTemplateResponsePrivate;

class QTAWSMGN_EXPORT DeleteLaunchConfigurationTemplateResponse : public MgnResponse {
    Q_OBJECT

public:
    DeleteLaunchConfigurationTemplateResponse(const DeleteLaunchConfigurationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLaunchConfigurationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchConfigurationTemplateResponse)
    Q_DISABLE_COPY(DeleteLaunchConfigurationTemplateResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
