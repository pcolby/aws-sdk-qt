// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEPERMISSIONREQUEST_H
#define QTAWS_REMOVEPERMISSIONREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class RemovePermissionRequestPrivate;

class QTAWSSQS_EXPORT RemovePermissionRequest : public SqsRequest {

public:
    RemovePermissionRequest(const RemovePermissionRequest &other);
    RemovePermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemovePermissionRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
