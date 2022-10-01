// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESERVATIONRESPONSE_H
#define QTAWS_UPDATERESERVATIONRESPONSE_H

#include "medialiveresponse.h"
#include "updatereservationrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateReservationResponsePrivate;

class QTAWSMEDIALIVE_EXPORT UpdateReservationResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    UpdateReservationResponse(const UpdateReservationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateReservationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReservationResponse)
    Q_DISABLE_COPY(UpdateReservationResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
