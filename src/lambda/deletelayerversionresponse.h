// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAYERVERSIONRESPONSE_H
#define QTAWS_DELETELAYERVERSIONRESPONSE_H

#include "lambdaresponse.h"
#include "deletelayerversionrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteLayerVersionResponsePrivate;

class QTAWSLAMBDA_EXPORT DeleteLayerVersionResponse : public LambdaResponse {
    Q_OBJECT

public:
    DeleteLayerVersionResponse(const DeleteLayerVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLayerVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLayerVersionResponse)
    Q_DISABLE_COPY(DeleteLayerVersionResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
