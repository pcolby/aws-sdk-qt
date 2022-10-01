// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRACKERSRESPONSE_H
#define QTAWS_LISTTRACKERSRESPONSE_H

#include "locationresponse.h"
#include "listtrackersrequest.h"

namespace QtAws {
namespace Location {

class ListTrackersResponsePrivate;

class QTAWSLOCATION_EXPORT ListTrackersResponse : public LocationResponse {
    Q_OBJECT

public:
    ListTrackersResponse(const ListTrackersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrackersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrackersResponse)
    Q_DISABLE_COPY(ListTrackersResponse)

};

} // namespace Location
} // namespace QtAws

#endif
