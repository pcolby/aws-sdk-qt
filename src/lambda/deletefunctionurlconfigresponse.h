// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONURLCONFIGRESPONSE_H
#define QTAWS_DELETEFUNCTIONURLCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "deletefunctionurlconfigrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionUrlConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT DeleteFunctionUrlConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    DeleteFunctionUrlConfigResponse(const DeleteFunctionUrlConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFunctionUrlConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFunctionUrlConfigResponse)
    Q_DISABLE_COPY(DeleteFunctionUrlConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
