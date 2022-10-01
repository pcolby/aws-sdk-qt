// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSESSIONRESPONSE_H
#define QTAWS_STOPSESSIONRESPONSE_H

#include "glueresponse.h"
#include "stopsessionrequest.h"

namespace QtAws {
namespace Glue {

class StopSessionResponsePrivate;

class QTAWSGLUE_EXPORT StopSessionResponse : public GlueResponse {
    Q_OBJECT

public:
    StopSessionResponse(const StopSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopSessionResponse)
    Q_DISABLE_COPY(StopSessionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
