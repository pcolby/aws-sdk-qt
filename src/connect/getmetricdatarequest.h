// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICDATAREQUEST_H
#define QTAWS_GETMETRICDATAREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class GetMetricDataRequestPrivate;

class QTAWSCONNECT_EXPORT GetMetricDataRequest : public ConnectRequest {

public:
    GetMetricDataRequest(const GetMetricDataRequest &other);
    GetMetricDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricDataRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
