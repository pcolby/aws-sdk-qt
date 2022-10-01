// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERDEFINEDFUNCTIONSRESPONSE_H
#define QTAWS_GETUSERDEFINEDFUNCTIONSRESPONSE_H

#include "glueresponse.h"
#include "getuserdefinedfunctionsrequest.h"

namespace QtAws {
namespace Glue {

class GetUserDefinedFunctionsResponsePrivate;

class QTAWSGLUE_EXPORT GetUserDefinedFunctionsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetUserDefinedFunctionsResponse(const GetUserDefinedFunctionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUserDefinedFunctionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserDefinedFunctionsResponse)
    Q_DISABLE_COPY(GetUserDefinedFunctionsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
