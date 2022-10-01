// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRIGGERRESPONSE_H
#define QTAWS_STARTTRIGGERRESPONSE_H

#include "glueresponse.h"
#include "starttriggerrequest.h"

namespace QtAws {
namespace Glue {

class StartTriggerResponsePrivate;

class QTAWSGLUE_EXPORT StartTriggerResponse : public GlueResponse {
    Q_OBJECT

public:
    StartTriggerResponse(const StartTriggerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartTriggerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTriggerResponse)
    Q_DISABLE_COPY(StartTriggerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
