// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITFINDINGSRESPONSE_H
#define QTAWS_LISTAUDITFINDINGSRESPONSE_H

#include "iotresponse.h"
#include "listauditfindingsrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditFindingsResponsePrivate;

class QTAWSIOT_EXPORT ListAuditFindingsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListAuditFindingsResponse(const ListAuditFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAuditFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAuditFindingsResponse)
    Q_DISABLE_COPY(ListAuditFindingsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
