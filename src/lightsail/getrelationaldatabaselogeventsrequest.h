// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASELOGEVENTSREQUEST_H
#define QTAWS_GETRELATIONALDATABASELOGEVENTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseLogEventsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseLogEventsRequest : public LightsailRequest {

public:
    GetRelationalDatabaseLogEventsRequest(const GetRelationalDatabaseLogEventsRequest &other);
    GetRelationalDatabaseLogEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseLogEventsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
