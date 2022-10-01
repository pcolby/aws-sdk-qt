// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHCONFIGURATIONREQUEST_H
#define QTAWS_UPDATELAUNCHCONFIGURATIONREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class UpdateLaunchConfigurationRequestPrivate;

class QTAWSDRS_EXPORT UpdateLaunchConfigurationRequest : public DrsRequest {

public:
    UpdateLaunchConfigurationRequest(const UpdateLaunchConfigurationRequest &other);
    UpdateLaunchConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLaunchConfigurationRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
