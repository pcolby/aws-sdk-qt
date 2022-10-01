// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGENERATEDCODEJOBRESPONSE_H
#define QTAWS_GETGENERATEDCODEJOBRESPONSE_H

#include "gamesparksresponse.h"
#include "getgeneratedcodejobrequest.h"

namespace QtAws {
namespace GameSparks {

class GetGeneratedCodeJobResponsePrivate;

class QTAWSGAMESPARKS_EXPORT GetGeneratedCodeJobResponse : public GameSparksResponse {
    Q_OBJECT

public:
    GetGeneratedCodeJobResponse(const GetGeneratedCodeJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGeneratedCodeJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGeneratedCodeJobResponse)
    Q_DISABLE_COPY(GetGeneratedCodeJobResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
