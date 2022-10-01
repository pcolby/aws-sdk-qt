// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVATIONREQUEST_H
#define QTAWS_DESCRIBERESERVATIONREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeReservationRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DescribeReservationRequest : public MediaLiveRequest {

public:
    DescribeReservationRequest(const DescribeReservationRequest &other);
    DescribeReservationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservationRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
