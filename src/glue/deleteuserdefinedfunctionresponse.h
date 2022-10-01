// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERDEFINEDFUNCTIONRESPONSE_H
#define QTAWS_DELETEUSERDEFINEDFUNCTIONRESPONSE_H

#include "glueresponse.h"
#include "deleteuserdefinedfunctionrequest.h"

namespace QtAws {
namespace Glue {

class DeleteUserDefinedFunctionResponsePrivate;

class QTAWSGLUE_EXPORT DeleteUserDefinedFunctionResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteUserDefinedFunctionResponse(const DeleteUserDefinedFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserDefinedFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserDefinedFunctionResponse)
    Q_DISABLE_COPY(DeleteUserDefinedFunctionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
