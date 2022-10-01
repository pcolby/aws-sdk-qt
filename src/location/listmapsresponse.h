// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAPSRESPONSE_H
#define QTAWS_LISTMAPSRESPONSE_H

#include "locationresponse.h"
#include "listmapsrequest.h"

namespace QtAws {
namespace Location {

class ListMapsResponsePrivate;

class QTAWSLOCATION_EXPORT ListMapsResponse : public LocationResponse {
    Q_OBJECT

public:
    ListMapsResponse(const ListMapsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMapsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMapsResponse)
    Q_DISABLE_COPY(ListMapsResponse)

};

} // namespace Location
} // namespace QtAws

#endif
