// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATABASEREQUEST_H
#define QTAWS_CREATEDATABASEREQUEST_H

#include "timestreamwriterequest.h"

namespace QtAws {
namespace TimestreamWrite {

class CreateDatabaseRequestPrivate;

class QTAWSTIMESTREAMWRITE_EXPORT CreateDatabaseRequest : public TimestreamWriteRequest {

public:
    CreateDatabaseRequest(const CreateDatabaseRequest &other);
    CreateDatabaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatabaseRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
