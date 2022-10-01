// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONURLCONFIGREQUEST_H
#define QTAWS_DELETEFUNCTIONURLCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionUrlConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT DeleteFunctionUrlConfigRequest : public LambdaRequest {

public:
    DeleteFunctionUrlConfigRequest(const DeleteFunctionUrlConfigRequest &other);
    DeleteFunctionUrlConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFunctionUrlConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
