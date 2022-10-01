// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTCREATIONSTATUSRESPONSE_H
#define QTAWS_LISTACCOUNTASSIGNMENTCREATIONSTATUSRESPONSE_H

#include "ssoadminresponse.h"
#include "listaccountassignmentcreationstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentCreationStatusResponsePrivate;

class QTAWSSSOADMIN_EXPORT ListAccountAssignmentCreationStatusResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    ListAccountAssignmentCreationStatusResponse(const ListAccountAssignmentCreationStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountAssignmentCreationStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountAssignmentCreationStatusResponse)
    Q_DISABLE_COPY(ListAccountAssignmentCreationStatusResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
