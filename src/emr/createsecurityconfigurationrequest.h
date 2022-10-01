// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYCONFIGURATIONREQUEST_H
#define QTAWS_CREATESECURITYCONFIGURATIONREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class CreateSecurityConfigurationRequestPrivate;

class QTAWSEMR_EXPORT CreateSecurityConfigurationRequest : public EmrRequest {

public:
    CreateSecurityConfigurationRequest(const CreateSecurityConfigurationRequest &other);
    CreateSecurityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSecurityConfigurationRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
