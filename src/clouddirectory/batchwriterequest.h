// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHWRITEREQUEST_H
#define QTAWS_BATCHWRITEREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class BatchWriteRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT BatchWriteRequest : public CloudDirectoryRequest {

public:
    BatchWriteRequest(const BatchWriteRequest &other);
    BatchWriteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchWriteRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
