// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESERVATIONSREQUEST_H
#define QTAWS_LISTRESERVATIONSREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class ListReservationsRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT ListReservationsRequest : public MediaConnectRequest {

public:
    ListReservationsRequest(const ListReservationsRequest &other);
    ListReservationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReservationsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
