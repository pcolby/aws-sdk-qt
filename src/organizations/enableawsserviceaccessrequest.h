// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAWSSERVICEACCESSREQUEST_H
#define QTAWS_ENABLEAWSSERVICEACCESSREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class EnableAWSServiceAccessRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT EnableAWSServiceAccessRequest : public OrganizationsRequest {

public:
    EnableAWSServiceAccessRequest(const EnableAWSServiceAccessRequest &other);
    EnableAWSServiceAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableAWSServiceAccessRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
