// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRIGGERRESPONSE_H
#define QTAWS_GETTRIGGERRESPONSE_H

#include "glueresponse.h"
#include "gettriggerrequest.h"

namespace QtAws {
namespace Glue {

class GetTriggerResponsePrivate;

class QTAWSGLUE_EXPORT GetTriggerResponse : public GlueResponse {
    Q_OBJECT

public:
    GetTriggerResponse(const GetTriggerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTriggerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTriggerResponse)
    Q_DISABLE_COPY(GetTriggerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
