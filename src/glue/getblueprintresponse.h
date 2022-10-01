// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTRESPONSE_H
#define QTAWS_GETBLUEPRINTRESPONSE_H

#include "glueresponse.h"
#include "getblueprintrequest.h"

namespace QtAws {
namespace Glue {

class GetBlueprintResponsePrivate;

class QTAWSGLUE_EXPORT GetBlueprintResponse : public GlueResponse {
    Q_OBJECT

public:
    GetBlueprintResponse(const GetBlueprintRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBlueprintRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlueprintResponse)
    Q_DISABLE_COPY(GetBlueprintResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
