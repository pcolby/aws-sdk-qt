// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEREQUEST_H
#define QTAWS_GETRELATIONALDATABASEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseRequest : public LightsailRequest {

public:
    GetRelationalDatabaseRequest(const GetRelationalDatabaseRequest &other);
    GetRelationalDatabaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
