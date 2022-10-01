// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHCONFIGURATIONRESPONSE_H
#define QTAWS_GETLAUNCHCONFIGURATIONRESPONSE_H

#include "mgnresponse.h"
#include "getlaunchconfigurationrequest.h"

namespace QtAws {
namespace Mgn {

class GetLaunchConfigurationResponsePrivate;

class QTAWSMGN_EXPORT GetLaunchConfigurationResponse : public MgnResponse {
    Q_OBJECT

public:
    GetLaunchConfigurationResponse(const GetLaunchConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLaunchConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchConfigurationResponse)
    Q_DISABLE_COPY(GetLaunchConfigurationResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
