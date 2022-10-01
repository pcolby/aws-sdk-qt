// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALIASESREQUEST_H
#define QTAWS_LISTALIASESREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class ListAliasesRequestPrivate;

class QTAWSLAMBDA_EXPORT ListAliasesRequest : public LambdaRequest {

public:
    ListAliasesRequest(const ListAliasesRequest &other);
    ListAliasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAliasesRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
