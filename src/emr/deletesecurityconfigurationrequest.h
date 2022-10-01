// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYCONFIGURATIONREQUEST_H
#define QTAWS_DELETESECURITYCONFIGURATIONREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class DeleteSecurityConfigurationRequestPrivate;

class QTAWSEMR_EXPORT DeleteSecurityConfigurationRequest : public EmrRequest {

public:
    DeleteSecurityConfigurationRequest(const DeleteSecurityConfigurationRequest &other);
    DeleteSecurityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSecurityConfigurationRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
