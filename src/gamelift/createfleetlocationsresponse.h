// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETLOCATIONSRESPONSE_H
#define QTAWS_CREATEFLEETLOCATIONSRESPONSE_H

#include "gameliftresponse.h"
#include "createfleetlocationsrequest.h"

namespace QtAws {
namespace GameLift {

class CreateFleetLocationsResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreateFleetLocationsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreateFleetLocationsResponse(const CreateFleetLocationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFleetLocationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFleetLocationsResponse)
    Q_DISABLE_COPY(CreateFleetLocationsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
