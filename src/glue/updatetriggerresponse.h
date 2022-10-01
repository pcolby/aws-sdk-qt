// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRIGGERRESPONSE_H
#define QTAWS_UPDATETRIGGERRESPONSE_H

#include "glueresponse.h"
#include "updatetriggerrequest.h"

namespace QtAws {
namespace Glue {

class UpdateTriggerResponsePrivate;

class QTAWSGLUE_EXPORT UpdateTriggerResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateTriggerResponse(const UpdateTriggerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTriggerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTriggerResponse)
    Q_DISABLE_COPY(UpdateTriggerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
