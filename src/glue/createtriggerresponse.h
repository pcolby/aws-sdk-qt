// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRIGGERRESPONSE_H
#define QTAWS_CREATETRIGGERRESPONSE_H

#include "glueresponse.h"
#include "createtriggerrequest.h"

namespace QtAws {
namespace Glue {

class CreateTriggerResponsePrivate;

class QTAWSGLUE_EXPORT CreateTriggerResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateTriggerResponse(const CreateTriggerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTriggerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTriggerResponse)
    Q_DISABLE_COPY(CreateTriggerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
