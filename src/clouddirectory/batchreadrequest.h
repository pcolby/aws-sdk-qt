// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHREADREQUEST_H
#define QTAWS_BATCHREADREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class BatchReadRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT BatchReadRequest : public CloudDirectoryRequest {

public:
    BatchReadRequest(const BatchReadRequest &other);
    BatchReadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchReadRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
