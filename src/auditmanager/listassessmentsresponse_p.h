// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTSRESPONSE_P_H
#define QTAWS_LISTASSESSMENTSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentsResponse;

class ListAssessmentsResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit ListAssessmentsResponsePrivate(ListAssessmentsResponse * const q);

    void parseListAssessmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssessmentsResponse)
    Q_DISABLE_COPY(ListAssessmentsResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
