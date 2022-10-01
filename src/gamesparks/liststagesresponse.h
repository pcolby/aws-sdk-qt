// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGESRESPONSE_H
#define QTAWS_LISTSTAGESRESPONSE_H

#include "gamesparksresponse.h"
#include "liststagesrequest.h"

namespace QtAws {
namespace GameSparks {

class ListStagesResponsePrivate;

class QTAWSGAMESPARKS_EXPORT ListStagesResponse : public GameSparksResponse {
    Q_OBJECT

public:
    ListStagesResponse(const ListStagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStagesResponse)
    Q_DISABLE_COPY(ListStagesResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
