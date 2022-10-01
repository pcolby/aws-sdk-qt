// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEMETRICDATAREQUEST_H
#define QTAWS_GETRELATIONALDATABASEMETRICDATAREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseMetricDataRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseMetricDataRequest : public LightsailRequest {

public:
    GetRelationalDatabaseMetricDataRequest(const GetRelationalDatabaseMetricDataRequest &other);
    GetRelationalDatabaseMetricDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseMetricDataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
