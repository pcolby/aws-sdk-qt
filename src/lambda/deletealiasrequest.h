// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALIASREQUEST_H
#define QTAWS_DELETEALIASREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class DeleteAliasRequestPrivate;

class QTAWSLAMBDA_EXPORT DeleteAliasRequest : public LambdaRequest {

public:
    DeleteAliasRequest(const DeleteAliasRequest &other);
    DeleteAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAliasRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
