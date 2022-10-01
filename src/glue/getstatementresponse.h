// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATEMENTRESPONSE_H
#define QTAWS_GETSTATEMENTRESPONSE_H

#include "glueresponse.h"
#include "getstatementrequest.h"

namespace QtAws {
namespace Glue {

class GetStatementResponsePrivate;

class QTAWSGLUE_EXPORT GetStatementResponse : public GlueResponse {
    Q_OBJECT

public:
    GetStatementResponse(const GetStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStatementResponse)
    Q_DISABLE_COPY(GetStatementResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
