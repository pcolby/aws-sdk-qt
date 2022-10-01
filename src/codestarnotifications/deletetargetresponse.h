// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETARGETRESPONSE_H
#define QTAWS_DELETETARGETRESPONSE_H

#include "codestarnotificationsresponse.h"
#include "deletetargetrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class DeleteTargetResponsePrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT DeleteTargetResponse : public CodestarNotificationsResponse {
    Q_OBJECT

public:
    DeleteTargetResponse(const DeleteTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTargetResponse)
    Q_DISABLE_COPY(DeleteTargetResponse)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
