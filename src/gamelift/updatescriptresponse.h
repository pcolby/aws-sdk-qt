// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCRIPTRESPONSE_H
#define QTAWS_UPDATESCRIPTRESPONSE_H

#include "gameliftresponse.h"
#include "updatescriptrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateScriptResponsePrivate;

class QTAWSGAMELIFT_EXPORT UpdateScriptResponse : public GameLiftResponse {
    Q_OBJECT

public:
    UpdateScriptResponse(const UpdateScriptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateScriptRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScriptResponse)
    Q_DISABLE_COPY(UpdateScriptResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
