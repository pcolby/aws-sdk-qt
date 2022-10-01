// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTRANSFORMRESPONSE_H
#define QTAWS_GETMLTRANSFORMRESPONSE_H

#include "glueresponse.h"
#include "getmltransformrequest.h"

namespace QtAws {
namespace Glue {

class GetMLTransformResponsePrivate;

class QTAWSGLUE_EXPORT GetMLTransformResponse : public GlueResponse {
    Q_OBJECT

public:
    GetMLTransformResponse(const GetMLTransformRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMLTransformRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMLTransformResponse)
    Q_DISABLE_COPY(GetMLTransformResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
