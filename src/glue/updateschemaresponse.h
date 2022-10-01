// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEMARESPONSE_H
#define QTAWS_UPDATESCHEMARESPONSE_H

#include "glueresponse.h"
#include "updateschemarequest.h"

namespace QtAws {
namespace Glue {

class UpdateSchemaResponsePrivate;

class QTAWSGLUE_EXPORT UpdateSchemaResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateSchemaResponse(const UpdateSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSchemaResponse)
    Q_DISABLE_COPY(UpdateSchemaResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
