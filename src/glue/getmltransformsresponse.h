// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTRANSFORMSRESPONSE_H
#define QTAWS_GETMLTRANSFORMSRESPONSE_H

#include "glueresponse.h"
#include "getmltransformsrequest.h"

namespace QtAws {
namespace Glue {

class GetMLTransformsResponsePrivate;

class QTAWSGLUE_EXPORT GetMLTransformsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetMLTransformsResponse(const GetMLTransformsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMLTransformsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMLTransformsResponse)
    Q_DISABLE_COPY(GetMLTransformsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
