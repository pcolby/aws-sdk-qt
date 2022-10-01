// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPERMISSIONREQUEST_H
#define QTAWS_ADDPERMISSIONREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class AddPermissionRequestPrivate;

class QTAWSSQS_EXPORT AddPermissionRequest : public SqsRequest {

public:
    AddPermissionRequest(const AddPermissionRequest &other);
    AddPermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddPermissionRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
