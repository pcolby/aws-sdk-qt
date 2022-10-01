// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYSCANNINGCONFIGURATIONREQUEST_H
#define QTAWS_PUTREGISTRYSCANNINGCONFIGURATIONREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class PutRegistryScanningConfigurationRequestPrivate;

class QTAWSECR_EXPORT PutRegistryScanningConfigurationRequest : public EcrRequest {

public:
    PutRegistryScanningConfigurationRequest(const PutRegistryScanningConfigurationRequest &other);
    PutRegistryScanningConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRegistryScanningConfigurationRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
