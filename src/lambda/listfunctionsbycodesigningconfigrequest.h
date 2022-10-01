// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONSBYCODESIGNINGCONFIGREQUEST_H
#define QTAWS_LISTFUNCTIONSBYCODESIGNINGCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionsByCodeSigningConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT ListFunctionsByCodeSigningConfigRequest : public LambdaRequest {

public:
    ListFunctionsByCodeSigningConfigRequest(const ListFunctionsByCodeSigningConfigRequest &other);
    ListFunctionsByCodeSigningConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionsByCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
