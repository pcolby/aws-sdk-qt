// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAWSSERVICEACCESSREQUEST_H
#define QTAWS_DISABLEAWSSERVICEACCESSREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class DisableAWSServiceAccessRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT DisableAWSServiceAccessRequest : public OrganizationsRequest {

public:
    DisableAWSServiceAccessRequest(const DisableAWSServiceAccessRequest &other);
    DisableAWSServiceAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableAWSServiceAccessRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
