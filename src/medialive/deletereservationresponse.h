// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESERVATIONRESPONSE_H
#define QTAWS_DELETERESERVATIONRESPONSE_H

#include "medialiveresponse.h"
#include "deletereservationrequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteReservationResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DeleteReservationResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DeleteReservationResponse(const DeleteReservationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReservationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReservationResponse)
    Q_DISABLE_COPY(DeleteReservationResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
