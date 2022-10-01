// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERELATIONALDATABASEREQUEST_H
#define QTAWS_DELETERELATIONALDATABASEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteRelationalDatabaseRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteRelationalDatabaseRequest : public LightsailRequest {

public:
    DeleteRelationalDatabaseRequest(const DeleteRelationalDatabaseRequest &other);
    DeleteRelationalDatabaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRelationalDatabaseRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
