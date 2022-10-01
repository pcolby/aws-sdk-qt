// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETLOCATIONSRESPONSE_H
#define QTAWS_DELETEFLEETLOCATIONSRESPONSE_H

#include "gameliftresponse.h"
#include "deletefleetlocationsrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteFleetLocationsResponsePrivate;

class QTAWSGAMELIFT_EXPORT DeleteFleetLocationsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DeleteFleetLocationsResponse(const DeleteFleetLocationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFleetLocationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetLocationsResponse)
    Q_DISABLE_COPY(DeleteFleetLocationsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
