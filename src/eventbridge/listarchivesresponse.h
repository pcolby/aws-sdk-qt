// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARCHIVESRESPONSE_H
#define QTAWS_LISTARCHIVESRESPONSE_H

#include "eventbridgeresponse.h"
#include "listarchivesrequest.h"

namespace QtAws {
namespace EventBridge {

class ListArchivesResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT ListArchivesResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    ListArchivesResponse(const ListArchivesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListArchivesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListArchivesResponse)
    Q_DISABLE_COPY(ListArchivesResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
