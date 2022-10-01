// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTRUNSRESPONSE_H
#define QTAWS_GETBLUEPRINTRUNSRESPONSE_H

#include "glueresponse.h"
#include "getblueprintrunsrequest.h"

namespace QtAws {
namespace Glue {

class GetBlueprintRunsResponsePrivate;

class QTAWSGLUE_EXPORT GetBlueprintRunsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetBlueprintRunsResponse(const GetBlueprintRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBlueprintRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlueprintRunsResponse)
    Q_DISABLE_COPY(GetBlueprintRunsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
