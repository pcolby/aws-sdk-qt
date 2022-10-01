// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYSCANNINGCONFIGURATIONREQUEST_H
#define QTAWS_GETREGISTRYSCANNINGCONFIGURATIONREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class GetRegistryScanningConfigurationRequestPrivate;

class QTAWSECR_EXPORT GetRegistryScanningConfigurationRequest : public EcrRequest {

public:
    GetRegistryScanningConfigurationRequest(const GetRegistryScanningConfigurationRequest &other);
    GetRegistryScanningConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegistryScanningConfigurationRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
