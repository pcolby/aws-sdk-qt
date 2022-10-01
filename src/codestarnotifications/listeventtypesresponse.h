// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTTYPESRESPONSE_H
#define QTAWS_LISTEVENTTYPESRESPONSE_H

#include "codestarnotificationsresponse.h"
#include "listeventtypesrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class ListEventTypesResponsePrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT ListEventTypesResponse : public CodestarNotificationsResponse {
    Q_OBJECT

public:
    ListEventTypesResponse(const ListEventTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventTypesResponse)
    Q_DISABLE_COPY(ListEventTypesResponse)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
