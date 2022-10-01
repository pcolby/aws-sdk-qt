// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASEREQUEST_H
#define QTAWS_CREATERELATIONALDATABASEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateRelationalDatabaseRequest : public LightsailRequest {

public:
    CreateRelationalDatabaseRequest(const CreateRelationalDatabaseRequest &other);
    CreateRelationalDatabaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
