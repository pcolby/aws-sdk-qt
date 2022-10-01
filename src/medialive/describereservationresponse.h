// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVATIONRESPONSE_H
#define QTAWS_DESCRIBERESERVATIONRESPONSE_H

#include "medialiveresponse.h"
#include "describereservationrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeReservationResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DescribeReservationResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DescribeReservationResponse(const DescribeReservationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservationResponse)
    Q_DISABLE_COPY(DescribeReservationResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
