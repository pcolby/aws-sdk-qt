// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVELAYERVERSIONPERMISSIONRESPONSE_H
#define QTAWS_REMOVELAYERVERSIONPERMISSIONRESPONSE_H

#include "lambdaresponse.h"
#include "removelayerversionpermissionrequest.h"

namespace QtAws {
namespace Lambda {

class RemoveLayerVersionPermissionResponsePrivate;

class QTAWSLAMBDA_EXPORT RemoveLayerVersionPermissionResponse : public LambdaResponse {
    Q_OBJECT

public:
    RemoveLayerVersionPermissionResponse(const RemoveLayerVersionPermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveLayerVersionPermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveLayerVersionPermissionResponse)
    Q_DISABLE_COPY(RemoveLayerVersionPermissionResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
