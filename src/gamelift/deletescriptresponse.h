// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCRIPTRESPONSE_H
#define QTAWS_DELETESCRIPTRESPONSE_H

#include "gameliftresponse.h"
#include "deletescriptrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteScriptResponsePrivate;

class QTAWSGAMELIFT_EXPORT DeleteScriptResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DeleteScriptResponse(const DeleteScriptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteScriptRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScriptResponse)
    Q_DISABLE_COPY(DeleteScriptResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
