// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCRIPTSRESPONSE_H
#define QTAWS_LISTSCRIPTSRESPONSE_H

#include "gameliftresponse.h"
#include "listscriptsrequest.h"

namespace QtAws {
namespace GameLift {

class ListScriptsResponsePrivate;

class QTAWSGAMELIFT_EXPORT ListScriptsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    ListScriptsResponse(const ListScriptsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListScriptsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListScriptsResponse)
    Q_DISABLE_COPY(ListScriptsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
