// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUALIFICATIONSCORERESPONSE_H
#define QTAWS_GETQUALIFICATIONSCORERESPONSE_H

#include "mturkresponse.h"
#include "getqualificationscorerequest.h"

namespace QtAws {
namespace MTurk {

class GetQualificationScoreResponsePrivate;

class QTAWSMTURK_EXPORT GetQualificationScoreResponse : public MTurkResponse {
    Q_OBJECT

public:
    GetQualificationScoreResponse(const GetQualificationScoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQualificationScoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQualificationScoreResponse)
    Q_DISABLE_COPY(GetQualificationScoreResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
