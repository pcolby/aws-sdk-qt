// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAYERVERSIONREQUEST_H
#define QTAWS_DELETELAYERVERSIONREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class DeleteLayerVersionRequestPrivate;

class QTAWSLAMBDA_EXPORT DeleteLayerVersionRequest : public LambdaRequest {

public:
    DeleteLayerVersionRequest(const DeleteLayerVersionRequest &other);
    DeleteLayerVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLayerVersionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
