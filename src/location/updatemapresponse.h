// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAPRESPONSE_H
#define QTAWS_UPDATEMAPRESPONSE_H

#include "locationresponse.h"
#include "updatemaprequest.h"

namespace QtAws {
namespace Location {

class UpdateMapResponsePrivate;

class QTAWSLOCATION_EXPORT UpdateMapResponse : public LocationResponse {
    Q_OBJECT

public:
    UpdateMapResponse(const UpdateMapRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMapRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMapResponse)
    Q_DISABLE_COPY(UpdateMapResponse)

};

} // namespace Location
} // namespace QtAws

#endif
