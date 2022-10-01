// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLESRESPONSE_H
#define QTAWS_GETTABLESRESPONSE_H

#include "glueresponse.h"
#include "gettablesrequest.h"

namespace QtAws {
namespace Glue {

class GetTablesResponsePrivate;

class QTAWSGLUE_EXPORT GetTablesResponse : public GlueResponse {
    Q_OBJECT

public:
    GetTablesResponse(const GetTablesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTablesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTablesResponse)
    Q_DISABLE_COPY(GetTablesResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
