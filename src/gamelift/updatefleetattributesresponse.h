// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETATTRIBUTESRESPONSE_H
#define QTAWS_UPDATEFLEETATTRIBUTESRESPONSE_H

#include "gameliftresponse.h"
#include "updatefleetattributesrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetAttributesResponsePrivate;

class QTAWSGAMELIFT_EXPORT UpdateFleetAttributesResponse : public GameLiftResponse {
    Q_OBJECT

public:
    UpdateFleetAttributesResponse(const UpdateFleetAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFleetAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetAttributesResponse)
    Q_DISABLE_COPY(UpdateFleetAttributesResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
