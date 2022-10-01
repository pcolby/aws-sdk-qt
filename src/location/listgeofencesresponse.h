// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOFENCESRESPONSE_H
#define QTAWS_LISTGEOFENCESRESPONSE_H

#include "locationresponse.h"
#include "listgeofencesrequest.h"

namespace QtAws {
namespace Location {

class ListGeofencesResponsePrivate;

class QTAWSLOCATION_EXPORT ListGeofencesResponse : public LocationResponse {
    Q_OBJECT

public:
    ListGeofencesResponse(const ListGeofencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGeofencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGeofencesResponse)
    Q_DISABLE_COPY(ListGeofencesResponse)

};

} // namespace Location
} // namespace QtAws

#endif
