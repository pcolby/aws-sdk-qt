// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBLUEPRINTRESPONSE_H
#define QTAWS_DELETEBLUEPRINTRESPONSE_H

#include "glueresponse.h"
#include "deleteblueprintrequest.h"

namespace QtAws {
namespace Glue {

class DeleteBlueprintResponsePrivate;

class QTAWSGLUE_EXPORT DeleteBlueprintResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteBlueprintResponse(const DeleteBlueprintRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBlueprintRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBlueprintResponse)
    Q_DISABLE_COPY(DeleteBlueprintResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
