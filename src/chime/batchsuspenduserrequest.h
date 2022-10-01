// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSUSPENDUSERREQUEST_H
#define QTAWS_BATCHSUSPENDUSERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class BatchSuspendUserRequestPrivate;

class QTAWSCHIME_EXPORT BatchSuspendUserRequest : public ChimeRequest {

public:
    BatchSuspendUserRequest(const BatchSuspendUserRequest &other);
    BatchSuspendUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchSuspendUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
