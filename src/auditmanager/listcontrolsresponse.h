// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLSRESPONSE_H
#define QTAWS_LISTCONTROLSRESPONSE_H

#include "auditmanagerresponse.h"
#include "listcontrolsrequest.h"

namespace QtAws {
namespace AuditManager {

class ListControlsResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT ListControlsResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    ListControlsResponse(const ListControlsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListControlsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListControlsResponse)
    Q_DISABLE_COPY(ListControlsResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
