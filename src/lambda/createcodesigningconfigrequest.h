// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODESIGNINGCONFIGREQUEST_H
#define QTAWS_CREATECODESIGNINGCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class CreateCodeSigningConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT CreateCodeSigningConfigRequest : public LambdaRequest {

public:
    CreateCodeSigningConfigRequest(const CreateCodeSigningConfigRequest &other);
    CreateCodeSigningConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
