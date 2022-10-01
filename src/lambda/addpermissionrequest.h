// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPERMISSIONREQUEST_H
#define QTAWS_ADDPERMISSIONREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class AddPermissionRequestPrivate;

class QTAWSLAMBDA_EXPORT AddPermissionRequest : public LambdaRequest {

public:
    AddPermissionRequest(const AddPermissionRequest &other);
    AddPermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddPermissionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
