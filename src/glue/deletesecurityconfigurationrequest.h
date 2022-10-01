// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYCONFIGURATIONREQUEST_H
#define QTAWS_DELETESECURITYCONFIGURATIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteSecurityConfigurationRequestPrivate;

class QTAWSGLUE_EXPORT DeleteSecurityConfigurationRequest : public GlueRequest {

public:
    DeleteSecurityConfigurationRequest(const DeleteSecurityConfigurationRequest &other);
    DeleteSecurityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSecurityConfigurationRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
