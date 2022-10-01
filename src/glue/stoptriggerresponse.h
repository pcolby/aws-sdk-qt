// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRIGGERRESPONSE_H
#define QTAWS_STOPTRIGGERRESPONSE_H

#include "glueresponse.h"
#include "stoptriggerrequest.h"

namespace QtAws {
namespace Glue {

class StopTriggerResponsePrivate;

class QTAWSGLUE_EXPORT StopTriggerResponse : public GlueResponse {
    Q_OBJECT

public:
    StopTriggerResponse(const StopTriggerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopTriggerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTriggerResponse)
    Q_DISABLE_COPY(StopTriggerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
