// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERSIONSBYFUNCTIONREQUEST_H
#define QTAWS_LISTVERSIONSBYFUNCTIONREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class ListVersionsByFunctionRequestPrivate;

class QTAWSLAMBDA_EXPORT ListVersionsByFunctionRequest : public LambdaRequest {

public:
    ListVersionsByFunctionRequest(const ListVersionsByFunctionRequest &other);
    ListVersionsByFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVersionsByFunctionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
