// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTRUNRESPONSE_H
#define QTAWS_GETBLUEPRINTRUNRESPONSE_H

#include "glueresponse.h"
#include "getblueprintrunrequest.h"

namespace QtAws {
namespace Glue {

class GetBlueprintRunResponsePrivate;

class QTAWSGLUE_EXPORT GetBlueprintRunResponse : public GlueResponse {
    Q_OBJECT

public:
    GetBlueprintRunResponse(const GetBlueprintRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBlueprintRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlueprintRunResponse)
    Q_DISABLE_COPY(GetBlueprintRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
