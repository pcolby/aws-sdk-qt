// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTMETRICDATAREQUEST_H
#define QTAWS_GETCURRENTMETRICDATAREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class GetCurrentMetricDataRequestPrivate;

class QTAWSCONNECT_EXPORT GetCurrentMetricDataRequest : public ConnectRequest {

public:
    GetCurrentMetricDataRequest(const GetCurrentMetricDataRequest &other);
    GetCurrentMetricDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCurrentMetricDataRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
