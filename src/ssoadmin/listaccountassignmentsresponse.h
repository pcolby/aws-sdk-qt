// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTSRESPONSE_H
#define QTAWS_LISTACCOUNTASSIGNMENTSRESPONSE_H

#include "ssoadminresponse.h"
#include "listaccountassignmentsrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentsResponsePrivate;

class QTAWSSSOADMIN_EXPORT ListAccountAssignmentsResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    ListAccountAssignmentsResponse(const ListAccountAssignmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountAssignmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountAssignmentsResponse)
    Q_DISABLE_COPY(ListAccountAssignmentsResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
