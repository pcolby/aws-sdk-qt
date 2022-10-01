// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTGENERATEDCODEJOBRESPONSE_H
#define QTAWS_STARTGENERATEDCODEJOBRESPONSE_H

#include "gamesparksresponse.h"
#include "startgeneratedcodejobrequest.h"

namespace QtAws {
namespace GameSparks {

class StartGeneratedCodeJobResponsePrivate;

class QTAWSGAMESPARKS_EXPORT StartGeneratedCodeJobResponse : public GameSparksResponse {
    Q_OBJECT

public:
    StartGeneratedCodeJobResponse(const StartGeneratedCodeJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartGeneratedCodeJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartGeneratedCodeJobResponse)
    Q_DISABLE_COPY(StartGeneratedCodeJobResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
