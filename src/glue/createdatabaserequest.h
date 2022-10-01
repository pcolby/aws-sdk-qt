// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATABASEREQUEST_H
#define QTAWS_CREATEDATABASEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateDatabaseRequestPrivate;

class QTAWSGLUE_EXPORT CreateDatabaseRequest : public GlueRequest {

public:
    CreateDatabaseRequest(const CreateDatabaseRequest &other);
    CreateDatabaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatabaseRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
