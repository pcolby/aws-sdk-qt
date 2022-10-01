// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCRIPTRESPONSE_H
#define QTAWS_CREATESCRIPTRESPONSE_H

#include "gameliftresponse.h"
#include "createscriptrequest.h"

namespace QtAws {
namespace GameLift {

class CreateScriptResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreateScriptResponse : public GameLiftResponse {
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

} // namespace GameLift
} // namespace QtAws

#endif
