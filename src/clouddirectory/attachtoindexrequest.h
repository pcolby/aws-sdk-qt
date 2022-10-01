// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTOINDEXREQUEST_H
#define QTAWS_ATTACHTOINDEXREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachToIndexRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT AttachToIndexRequest : public CloudDirectoryRequest {

public:
    AttachToIndexRequest(const AttachToIndexRequest &other);
    AttachToIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachToIndexRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
