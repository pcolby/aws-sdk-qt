// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRELATIONALDATABASEREQUEST_H
#define QTAWS_STARTRELATIONALDATABASEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class StartRelationalDatabaseRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT StartRelationalDatabaseRequest : public LightsailRequest {

public:
    StartRelationalDatabaseRequest(const StartRelationalDatabaseRequest &other);
    StartRelationalDatabaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
