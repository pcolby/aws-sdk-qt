// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINDEXREQUEST_H
#define QTAWS_CREATEINDEXREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateIndexRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CreateIndexRequest : public CloudDirectoryRequest {

public:
    CreateIndexRequest(const CreateIndexRequest &other);
    CreateIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIndexRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
