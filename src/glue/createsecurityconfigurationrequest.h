// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYCONFIGURATIONREQUEST_H
#define QTAWS_CREATESECURITYCONFIGURATIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateSecurityConfigurationRequestPrivate;

class QTAWSGLUE_EXPORT CreateSecurityConfigurationRequest : public GlueRequest {

public:
    CreateSecurityConfigurationRequest(const CreateSecurityConfigurationRequest &other);
    CreateSecurityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSecurityConfigurationRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
