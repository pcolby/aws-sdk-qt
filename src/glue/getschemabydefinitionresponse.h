// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMABYDEFINITIONRESPONSE_H
#define QTAWS_GETSCHEMABYDEFINITIONRESPONSE_H

#include "glueresponse.h"
#include "getschemabydefinitionrequest.h"

namespace QtAws {
namespace Glue {

class GetSchemaByDefinitionResponsePrivate;

class QTAWSGLUE_EXPORT GetSchemaByDefinitionResponse : public GlueResponse {
    Q_OBJECT

public:
    GetSchemaByDefinitionResponse(const GetSchemaByDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSchemaByDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSchemaByDefinitionResponse)
    Q_DISABLE_COPY(GetSchemaByDefinitionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
