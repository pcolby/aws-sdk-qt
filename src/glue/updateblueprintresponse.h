// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBLUEPRINTRESPONSE_H
#define QTAWS_UPDATEBLUEPRINTRESPONSE_H

#include "glueresponse.h"
#include "updateblueprintrequest.h"

namespace QtAws {
namespace Glue {

class UpdateBlueprintResponsePrivate;

class QTAWSGLUE_EXPORT UpdateBlueprintResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateBlueprintResponse(const UpdateBlueprintRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBlueprintRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBlueprintResponse)
    Q_DISABLE_COPY(UpdateBlueprintResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
