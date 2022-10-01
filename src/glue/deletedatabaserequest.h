// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATABASEREQUEST_H
#define QTAWS_DELETEDATABASEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteDatabaseRequestPrivate;

class QTAWSGLUE_EXPORT DeleteDatabaseRequest : public GlueRequest {

public:
    DeleteDatabaseRequest(const DeleteDatabaseRequest &other);
    DeleteDatabaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatabaseRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
