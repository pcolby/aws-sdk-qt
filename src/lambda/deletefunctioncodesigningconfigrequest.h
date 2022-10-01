// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONCODESIGNINGCONFIGREQUEST_H
#define QTAWS_DELETEFUNCTIONCODESIGNINGCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionCodeSigningConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT DeleteFunctionCodeSigningConfigRequest : public LambdaRequest {

public:
    DeleteFunctionCodeSigningConfigRequest(const DeleteFunctionCodeSigningConfigRequest &other);
    DeleteFunctionCodeSigningConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFunctionCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
