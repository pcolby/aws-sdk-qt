// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTASSIGNMENTREQUEST_H
#define QTAWS_CREATEACCOUNTASSIGNMENTREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class CreateAccountAssignmentRequestPrivate;

class QTAWSSSOADMIN_EXPORT CreateAccountAssignmentRequest : public SsoAdminRequest {

public:
    CreateAccountAssignmentRequest(const CreateAccountAssignmentRequest &other);
    CreateAccountAssignmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccountAssignmentRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
