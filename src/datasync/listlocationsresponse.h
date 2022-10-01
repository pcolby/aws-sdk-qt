// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOCATIONSRESPONSE_H
#define QTAWS_LISTLOCATIONSRESPONSE_H

#include "datasyncresponse.h"
#include "listlocationsrequest.h"

namespace QtAws {
namespace DataSync {

class ListLocationsResponsePrivate;

class QTAWSDATASYNC_EXPORT ListLocationsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    ListLocationsResponse(const ListLocationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLocationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLocationsResponse)
    Q_DISABLE_COPY(ListLocationsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
