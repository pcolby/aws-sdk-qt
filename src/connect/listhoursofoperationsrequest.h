// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOURSOFOPERATIONSREQUEST_H
#define QTAWS_LISTHOURSOFOPERATIONSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListHoursOfOperationsRequestPrivate;

class QTAWSCONNECT_EXPORT ListHoursOfOperationsRequest : public ConnectRequest {

public:
    ListHoursOfOperationsRequest(const ListHoursOfOperationsRequest &other);
    ListHoursOfOperationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHoursOfOperationsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
