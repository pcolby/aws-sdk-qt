// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERDEFINEDFUNCTIONRESPONSE_H
#define QTAWS_UPDATEUSERDEFINEDFUNCTIONRESPONSE_H

#include "glueresponse.h"
#include "updateuserdefinedfunctionrequest.h"

namespace QtAws {
namespace Glue {

class UpdateUserDefinedFunctionResponsePrivate;

class QTAWSGLUE_EXPORT UpdateUserDefinedFunctionResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateUserDefinedFunctionResponse(const UpdateUserDefinedFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserDefinedFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserDefinedFunctionResponse)
    Q_DISABLE_COPY(UpdateUserDefinedFunctionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
