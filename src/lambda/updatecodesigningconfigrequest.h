// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECODESIGNINGCONFIGREQUEST_H
#define QTAWS_UPDATECODESIGNINGCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class UpdateCodeSigningConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT UpdateCodeSigningConfigRequest : public LambdaRequest {

public:
    UpdateCodeSigningConfigRequest(const UpdateCodeSigningConfigRequest &other);
    UpdateCodeSigningConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
