// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHCONFIGURATIONREQUEST_H
#define QTAWS_GETLAUNCHCONFIGURATIONREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class GetLaunchConfigurationRequestPrivate;

class QTAWSMGN_EXPORT GetLaunchConfigurationRequest : public MgnRequest {

public:
    GetLaunchConfigurationRequest(const GetLaunchConfigurationRequest &other);
    GetLaunchConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchConfigurationRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
