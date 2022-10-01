// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHSCHEMAREQUEST_H
#define QTAWS_PUBLISHSCHEMAREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class PublishSchemaRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT PublishSchemaRequest : public CloudDirectoryRequest {

public:
    PublishSchemaRequest(const PublishSchemaRequest &other);
    PublishSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishSchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
