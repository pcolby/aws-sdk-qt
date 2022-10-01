// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECODESIGNINGCONFIGREQUEST_H
#define QTAWS_DELETECODESIGNINGCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class DeleteCodeSigningConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT DeleteCodeSigningConfigRequest : public LambdaRequest {

public:
    DeleteCodeSigningConfigRequest(const DeleteCodeSigningConfigRequest &other);
    DeleteCodeSigningConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
