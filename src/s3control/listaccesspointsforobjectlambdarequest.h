// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPOINTSFOROBJECTLAMBDAREQUEST_H
#define QTAWS_LISTACCESSPOINTSFOROBJECTLAMBDAREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class ListAccessPointsForObjectLambdaRequestPrivate;

class QTAWSS3CONTROL_EXPORT ListAccessPointsForObjectLambdaRequest : public S3ControlRequest {

public:
    ListAccessPointsForObjectLambdaRequest(const ListAccessPointsForObjectLambdaRequest &other);
    ListAccessPointsForObjectLambdaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessPointsForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
