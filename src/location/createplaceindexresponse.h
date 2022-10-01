// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLACEINDEXRESPONSE_H
#define QTAWS_CREATEPLACEINDEXRESPONSE_H

#include "locationresponse.h"
#include "createplaceindexrequest.h"

namespace QtAws {
namespace Location {

class CreatePlaceIndexResponsePrivate;

class QTAWSLOCATION_EXPORT CreatePlaceIndexResponse : public LocationResponse {
    Q_OBJECT

public:
    CreatePlaceIndexResponse(const CreatePlaceIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePlaceIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlaceIndexResponse)
    Q_DISABLE_COPY(CreatePlaceIndexResponse)

};

} // namespace Location
} // namespace QtAws

#endif
