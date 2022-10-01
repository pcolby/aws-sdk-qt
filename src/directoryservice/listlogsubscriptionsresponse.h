// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGSUBSCRIPTIONSRESPONSE_H
#define QTAWS_LISTLOGSUBSCRIPTIONSRESPONSE_H

#include "directoryserviceresponse.h"
#include "listlogsubscriptionsrequest.h"

namespace QtAws {
namespace DirectoryService {

class ListLogSubscriptionsResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ListLogSubscriptionsResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    ListLogSubscriptionsResponse(const ListLogSubscriptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLogSubscriptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLogSubscriptionsResponse)
    Q_DISABLE_COPY(ListLogSubscriptionsResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
