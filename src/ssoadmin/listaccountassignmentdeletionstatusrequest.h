// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTDELETIONSTATUSREQUEST_H
#define QTAWS_LISTACCOUNTASSIGNMENTDELETIONSTATUSREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentDeletionStatusRequestPrivate;

class QTAWSSSOADMIN_EXPORT ListAccountAssignmentDeletionStatusRequest : public SsoAdminRequest {

public:
    ListAccountAssignmentDeletionStatusRequest(const ListAccountAssignmentDeletionStatusRequest &other);
    ListAccountAssignmentDeletionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountAssignmentDeletionStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
