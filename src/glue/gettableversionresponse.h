// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEVERSIONRESPONSE_H
#define QTAWS_GETTABLEVERSIONRESPONSE_H

#include "glueresponse.h"
#include "gettableversionrequest.h"

namespace QtAws {
namespace Glue {

class GetTableVersionResponsePrivate;

class QTAWSGLUE_EXPORT GetTableVersionResponse : public GlueResponse {
    Q_OBJECT

public:
    GetTableVersionResponse(const GetTableVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTableVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTableVersionResponse)
    Q_DISABLE_COPY(GetTableVersionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
