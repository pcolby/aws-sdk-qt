// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEVERSIONSRESPONSE_H
#define QTAWS_GETTABLEVERSIONSRESPONSE_H

#include "glueresponse.h"
#include "gettableversionsrequest.h"

namespace QtAws {
namespace Glue {

class GetTableVersionsResponsePrivate;

class QTAWSGLUE_EXPORT GetTableVersionsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetTableVersionsResponse(const GetTableVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTableVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTableVersionsResponse)
    Q_DISABLE_COPY(GetTableVersionsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
