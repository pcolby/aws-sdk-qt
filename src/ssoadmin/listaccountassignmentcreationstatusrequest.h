// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTCREATIONSTATUSREQUEST_H
#define QTAWS_LISTACCOUNTASSIGNMENTCREATIONSTATUSREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentCreationStatusRequestPrivate;

class QTAWSSSOADMIN_EXPORT ListAccountAssignmentCreationStatusRequest : public SsoAdminRequest {

public:
    ListAccountAssignmentCreationStatusRequest(const ListAccountAssignmentCreationStatusRequest &other);
    ListAccountAssignmentCreationStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountAssignmentCreationStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
