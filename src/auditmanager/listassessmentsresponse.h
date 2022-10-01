// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTSRESPONSE_H
#define QTAWS_LISTASSESSMENTSRESPONSE_H

#include "auditmanagerresponse.h"
#include "listassessmentsrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentsResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT ListAssessmentsResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    ListAssessmentsResponse(const ListAssessmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssessmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentsResponse)
    Q_DISABLE_COPY(ListAssessmentsResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
