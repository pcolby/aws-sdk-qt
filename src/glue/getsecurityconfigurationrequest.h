// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSECURITYCONFIGURATIONREQUEST_H
#define QTAWS_GETSECURITYCONFIGURATIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetSecurityConfigurationRequestPrivate;

class QTAWSGLUE_EXPORT GetSecurityConfigurationRequest : public GlueRequest {

public:
    GetSecurityConfigurationRequest(const GetSecurityConfigurationRequest &other);
    GetSecurityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSecurityConfigurationRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
