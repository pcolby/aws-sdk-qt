// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONEVENTINVOKECONFIGSREQUEST_H
#define QTAWS_LISTFUNCTIONEVENTINVOKECONFIGSREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionEventInvokeConfigsRequestPrivate;

class QTAWSLAMBDA_EXPORT ListFunctionEventInvokeConfigsRequest : public LambdaRequest {

public:
    ListFunctionEventInvokeConfigsRequest(const ListFunctionEventInvokeConfigsRequest &other);
    ListFunctionEventInvokeConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionEventInvokeConfigsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
