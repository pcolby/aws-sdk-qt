// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEMAREQUEST_H
#define QTAWS_CREATESCHEMAREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateSchemaRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CreateSchemaRequest : public CloudDirectoryRequest {

public:
    CreateSchemaRequest(const CreateSchemaRequest &other);
    CreateSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
