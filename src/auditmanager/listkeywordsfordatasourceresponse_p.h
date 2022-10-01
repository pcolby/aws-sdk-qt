// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYWORDSFORDATASOURCERESPONSE_P_H
#define QTAWS_LISTKEYWORDSFORDATASOURCERESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class ListKeywordsForDataSourceResponse;

class ListKeywordsForDataSourceResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit ListKeywordsForDataSourceResponsePrivate(ListKeywordsForDataSourceResponse * const q);

    void parseListKeywordsForDataSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListKeywordsForDataSourceResponse)
    Q_DISABLE_COPY(ListKeywordsForDataSourceResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
