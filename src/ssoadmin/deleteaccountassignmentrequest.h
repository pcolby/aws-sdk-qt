// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTASSIGNMENTREQUEST_H
#define QTAWS_DELETEACCOUNTASSIGNMENTREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteAccountAssignmentRequestPrivate;

class QTAWSSSOADMIN_EXPORT DeleteAccountAssignmentRequest : public SsoAdminRequest {

public:
    DeleteAccountAssignmentRequest(const DeleteAccountAssignmentRequest &other);
    DeleteAccountAssignmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountAssignmentRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
