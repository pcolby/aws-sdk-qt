// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAFLOWGRAPHRESPONSE_H
#define QTAWS_GETDATAFLOWGRAPHRESPONSE_H

#include "glueresponse.h"
#include "getdataflowgraphrequest.h"

namespace QtAws {
namespace Glue {

class GetDataflowGraphResponsePrivate;

class QTAWSGLUE_EXPORT GetDataflowGraphResponse : public GlueResponse {
    Q_OBJECT

public:
    GetDataflowGraphResponse(const GetDataflowGraphRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataflowGraphRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataflowGraphResponse)
    Q_DISABLE_COPY(GetDataflowGraphResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
