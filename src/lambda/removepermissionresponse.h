// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEPERMISSIONRESPONSE_H
#define QTAWS_REMOVEPERMISSIONRESPONSE_H

#include "lambdaresponse.h"
#include "removepermissionrequest.h"

namespace QtAws {
namespace Lambda {

class RemovePermissionResponsePrivate;

class QTAWSLAMBDA_EXPORT RemovePermissionResponse : public LambdaResponse {
    Q_OBJECT

public:
    RemovePermissionResponse(const RemovePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemovePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemovePermissionResponse)
    Q_DISABLE_COPY(RemovePermissionResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
