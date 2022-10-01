// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCRIPTRESPONSE_H
#define QTAWS_CREATESCRIPTRESPONSE_H

#include "glueresponse.h"
#include "createscriptrequest.h"

namespace QtAws {
namespace Glue {

class CreateScriptResponsePrivate;

class QTAWSGLUE_EXPORT CreateScriptResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateScriptResponse(const CreateScriptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateScriptRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateScriptResponse)
    Q_DISABLE_COPY(CreateScriptResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
