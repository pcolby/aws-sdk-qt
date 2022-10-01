// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERDEFINEDFUNCTIONRESPONSE_H
#define QTAWS_CREATEUSERDEFINEDFUNCTIONRESPONSE_H

#include "glueresponse.h"
#include "createuserdefinedfunctionrequest.h"

namespace QtAws {
namespace Glue {

class CreateUserDefinedFunctionResponsePrivate;

class QTAWSGLUE_EXPORT CreateUserDefinedFunctionResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateUserDefinedFunctionResponse(const CreateUserDefinedFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUserDefinedFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserDefinedFunctionResponse)
    Q_DISABLE_COPY(CreateUserDefinedFunctionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
