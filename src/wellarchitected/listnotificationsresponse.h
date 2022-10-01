// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTIFICATIONSRESPONSE_H
#define QTAWS_LISTNOTIFICATIONSRESPONSE_H

#include "wellarchitectedresponse.h"
#include "listnotificationsrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListNotificationsResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ListNotificationsResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ListNotificationsResponse(const ListNotificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNotificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNotificationsResponse)
    Q_DISABLE_COPY(ListNotificationsResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
