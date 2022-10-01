// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHVERSIONRESPONSE_H
#define QTAWS_PUBLISHVERSIONRESPONSE_H

#include "lambdaresponse.h"
#include "publishversionrequest.h"

namespace QtAws {
namespace Lambda {

class PublishVersionResponsePrivate;

class QTAWSLAMBDA_EXPORT PublishVersionResponse : public LambdaResponse {
    Q_OBJECT

public:
    PublishVersionResponse(const PublishVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PublishVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishVersionResponse)
    Q_DISABLE_COPY(PublishVersionResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
