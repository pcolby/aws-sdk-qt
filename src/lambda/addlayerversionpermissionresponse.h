// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLAYERVERSIONPERMISSIONRESPONSE_H
#define QTAWS_ADDLAYERVERSIONPERMISSIONRESPONSE_H

#include "lambdaresponse.h"
#include "addlayerversionpermissionrequest.h"

namespace QtAws {
namespace Lambda {

class AddLayerVersionPermissionResponsePrivate;

class QTAWSLAMBDA_EXPORT AddLayerVersionPermissionResponse : public LambdaResponse {
    Q_OBJECT

public:
    AddLayerVersionPermissionResponse(const AddLayerVersionPermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddLayerVersionPermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddLayerVersionPermissionResponse)
    Q_DISABLE_COPY(AddLayerVersionPermissionResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
