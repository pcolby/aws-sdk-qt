// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONRESPONSE_H
#define QTAWS_CREATECONNECTIONRESPONSE_H

#include "glueresponse.h"
#include "createconnectionrequest.h"

namespace QtAws {
namespace Glue {

class CreateConnectionResponsePrivate;

class QTAWSGLUE_EXPORT CreateConnectionResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateConnectionResponse(const CreateConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectionResponse)
    Q_DISABLE_COPY(CreateConnectionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
