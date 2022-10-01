// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONCODERESPONSE_H
#define QTAWS_UPDATEFUNCTIONCODERESPONSE_H

#include "lambdaresponse.h"
#include "updatefunctioncoderequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionCodeResponsePrivate;

class QTAWSLAMBDA_EXPORT UpdateFunctionCodeResponse : public LambdaResponse {
    Q_OBJECT

public:
    UpdateFunctionCodeResponse(const UpdateFunctionCodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFunctionCodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionCodeResponse)
    Q_DISABLE_COPY(UpdateFunctionCodeResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
