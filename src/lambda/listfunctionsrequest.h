// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONSREQUEST_H
#define QTAWS_LISTFUNCTIONSREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionsRequestPrivate;

class QTAWSLAMBDA_EXPORT ListFunctionsRequest : public LambdaRequest {

public:
    ListFunctionsRequest(const ListFunctionsRequest &other);
    ListFunctionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
