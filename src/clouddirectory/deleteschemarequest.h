// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAREQUEST_H
#define QTAWS_DELETESCHEMAREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteSchemaRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DeleteSchemaRequest : public CloudDirectoryRequest {

public:
    DeleteSchemaRequest(const DeleteSchemaRequest &other);
    DeleteSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
