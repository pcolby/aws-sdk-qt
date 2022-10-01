// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBLUEPRINTRESPONSE_H
#define QTAWS_CREATEBLUEPRINTRESPONSE_H

#include "glueresponse.h"
#include "createblueprintrequest.h"

namespace QtAws {
namespace Glue {

class CreateBlueprintResponsePrivate;

class QTAWSGLUE_EXPORT CreateBlueprintResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateBlueprintResponse(const CreateBlueprintRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBlueprintRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBlueprintResponse)
    Q_DISABLE_COPY(CreateBlueprintResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
