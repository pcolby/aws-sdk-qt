// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDSRESPONSE_H
#define QTAWS_LISTRECORDSRESPONSE_H

#include "cognitosyncresponse.h"
#include "listrecordsrequest.h"

namespace QtAws {
namespace CognitoSync {

class ListRecordsResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT ListRecordsResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    ListRecordsResponse(const ListRecordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecordsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecordsResponse)
    Q_DISABLE_COPY(ListRecordsResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
