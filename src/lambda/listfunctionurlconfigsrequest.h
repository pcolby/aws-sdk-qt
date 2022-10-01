// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONURLCONFIGSREQUEST_H
#define QTAWS_LISTFUNCTIONURLCONFIGSREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionUrlConfigsRequestPrivate;

class QTAWSLAMBDA_EXPORT ListFunctionUrlConfigsRequest : public LambdaRequest {

public:
    ListFunctionUrlConfigsRequest(const ListFunctionUrlConfigsRequest &other);
    ListFunctionUrlConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionUrlConfigsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
