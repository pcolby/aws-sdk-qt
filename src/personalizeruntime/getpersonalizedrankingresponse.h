// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERSONALIZEDRANKINGRESPONSE_H
#define QTAWS_GETPERSONALIZEDRANKINGRESPONSE_H

#include "personalizeruntimeresponse.h"
#include "getpersonalizedrankingrequest.h"

namespace QtAws {
namespace PersonalizeRuntime {

class GetPersonalizedRankingResponsePrivate;

class QTAWSPERSONALIZERUNTIME_EXPORT GetPersonalizedRankingResponse : public PersonalizeRuntimeResponse {
    Q_OBJECT

public:
    GetPersonalizedRankingResponse(const GetPersonalizedRankingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPersonalizedRankingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPersonalizedRankingResponse)
    Q_DISABLE_COPY(GetPersonalizedRankingResponse)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif
