// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGENERATEDCODEJOBSRESPONSE_H
#define QTAWS_LISTGENERATEDCODEJOBSRESPONSE_H

#include "gamesparksresponse.h"
#include "listgeneratedcodejobsrequest.h"

namespace QtAws {
namespace GameSparks {

class ListGeneratedCodeJobsResponsePrivate;

class QTAWSGAMESPARKS_EXPORT ListGeneratedCodeJobsResponse : public GameSparksResponse {
    Q_OBJECT

public:
    ListGeneratedCodeJobsResponse(const ListGeneratedCodeJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGeneratedCodeJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGeneratedCodeJobsResponse)
    Q_DISABLE_COPY(ListGeneratedCodeJobsResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
