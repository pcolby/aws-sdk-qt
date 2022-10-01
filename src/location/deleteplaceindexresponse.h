// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEINDEXRESPONSE_H
#define QTAWS_DELETEPLACEINDEXRESPONSE_H

#include "locationresponse.h"
#include "deleteplaceindexrequest.h"

namespace QtAws {
namespace Location {

class DeletePlaceIndexResponsePrivate;

class QTAWSLOCATION_EXPORT DeletePlaceIndexResponse : public LocationResponse {
    Q_OBJECT

public:
    DeletePlaceIndexResponse(const DeletePlaceIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePlaceIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlaceIndexResponse)
    Q_DISABLE_COPY(DeletePlaceIndexResponse)

};

} // namespace Location
} // namespace QtAws

#endif
