// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATIONALDATABASEREQUEST_H
#define QTAWS_UPDATERELATIONALDATABASEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateRelationalDatabaseRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateRelationalDatabaseRequest : public LightsailRequest {

public:
    UpdateRelationalDatabaseRequest(const UpdateRelationalDatabaseRequest &other);
    UpdateRelationalDatabaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
