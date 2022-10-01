// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROBOTSRESPONSE_H
#define QTAWS_LISTROBOTSRESPONSE_H

#include "robomakerresponse.h"
#include "listrobotsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListRobotsResponsePrivate;

class QTAWSROBOMAKER_EXPORT ListRobotsResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    ListRobotsResponse(const ListRobotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRobotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRobotsResponse)
    Q_DISABLE_COPY(ListRobotsResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
