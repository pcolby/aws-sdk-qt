// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDSRESPONSE_H
#define QTAWS_LISTWORLDSRESPONSE_H

#include "robomakerresponse.h"
#include "listworldsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldsResponsePrivate;

class QTAWSROBOMAKER_EXPORT ListWorldsResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    ListWorldsResponse(const ListWorldsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorldsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorldsResponse)
    Q_DISABLE_COPY(ListWorldsResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
