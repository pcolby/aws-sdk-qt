// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLIVESOURCESRESPONSE_H
#define QTAWS_LISTLIVESOURCESRESPONSE_H

#include "mediatailorresponse.h"
#include "listlivesourcesrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListLiveSourcesResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT ListLiveSourcesResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    ListLiveSourcesResponse(const ListLiveSourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLiveSourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLiveSourcesResponse)
    Q_DISABLE_COPY(ListLiveSourcesResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
