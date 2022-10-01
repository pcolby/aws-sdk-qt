// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUNSUSPENDUSERREQUEST_H
#define QTAWS_BATCHUNSUSPENDUSERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class BatchUnsuspendUserRequestPrivate;

class QTAWSCHIME_EXPORT BatchUnsuspendUserRequest : public ChimeRequest {

public:
    BatchUnsuspendUserRequest(const BatchUnsuspendUserRequest &other);
    BatchUnsuspendUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUnsuspendUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
