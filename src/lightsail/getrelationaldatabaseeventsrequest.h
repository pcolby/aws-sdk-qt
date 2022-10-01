// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEEVENTSREQUEST_H
#define QTAWS_GETRELATIONALDATABASEEVENTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseEventsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseEventsRequest : public LightsailRequest {

public:
    GetRelationalDatabaseEventsRequest(const GetRelationalDatabaseEventsRequest &other);
    GetRelationalDatabaseEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseEventsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
