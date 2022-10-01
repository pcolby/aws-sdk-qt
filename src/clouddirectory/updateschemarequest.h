// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEMAREQUEST_H
#define QTAWS_UPDATESCHEMAREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateSchemaRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpdateSchemaRequest : public CloudDirectoryRequest {

public:
    UpdateSchemaRequest(const UpdateSchemaRequest &other);
    UpdateSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
