// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSRESPONSE_H
#define QTAWS_LISTTARGETSRESPONSE_H

#include "codestarnotificationsresponse.h"
#include "listtargetsrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class ListTargetsResponsePrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT ListTargetsResponse : public CodestarNotificationsResponse {
    Q_OBJECT

public:
    ListTargetsResponse(const ListTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetsResponse)
    Q_DISABLE_COPY(ListTargetsResponse)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
