// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTDELETIONSTATUSRESPONSE_H
#define QTAWS_LISTACCOUNTASSIGNMENTDELETIONSTATUSRESPONSE_H

#include "ssoadminresponse.h"
#include "listaccountassignmentdeletionstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentDeletionStatusResponsePrivate;

class QTAWSSSOADMIN_EXPORT ListAccountAssignmentDeletionStatusResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    ListAccountAssignmentDeletionStatusResponse(const ListAccountAssignmentDeletionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountAssignmentDeletionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountAssignmentDeletionStatusResponse)
    Q_DISABLE_COPY(ListAccountAssignmentDeletionStatusResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
