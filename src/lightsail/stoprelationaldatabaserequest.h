// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRELATIONALDATABASEREQUEST_H
#define QTAWS_STOPRELATIONALDATABASEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class StopRelationalDatabaseRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT StopRelationalDatabaseRequest : public LightsailRequest {

public:
    StopRelationalDatabaseRequest(const StopRelationalDatabaseRequest &other);
    StopRelationalDatabaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
