// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHLAYERVERSIONREQUEST_H
#define QTAWS_PUBLISHLAYERVERSIONREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class PublishLayerVersionRequestPrivate;

class QTAWSLAMBDA_EXPORT PublishLayerVersionRequest : public LambdaRequest {

public:
    PublishLayerVersionRequest(const PublishLayerVersionRequest &other);
    PublishLayerVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishLayerVersionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
