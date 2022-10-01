// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATELAUNCHCONFIGURATIONRESPONSE_H

#include "mgnresponse.h"
#include "updatelaunchconfigurationrequest.h"

namespace QtAws {
namespace Mgn {

class UpdateLaunchConfigurationResponsePrivate;

class QTAWSMGN_EXPORT UpdateLaunchConfigurationResponse : public MgnResponse {
    Q_OBJECT

public:
    UpdateLaunchConfigurationResponse(const UpdateLaunchConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLaunchConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLaunchConfigurationResponse)
    Q_DISABLE_COPY(UpdateLaunchConfigurationResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
