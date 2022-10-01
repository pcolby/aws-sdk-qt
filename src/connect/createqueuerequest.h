// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUEUEREQUEST_H
#define QTAWS_CREATEQUEUEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class CreateQueueRequestPrivate;

class QTAWSCONNECT_EXPORT CreateQueueRequest : public ConnectRequest {

public:
    CreateQueueRequest(const CreateQueueRequest &other);
    CreateQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQueueRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
