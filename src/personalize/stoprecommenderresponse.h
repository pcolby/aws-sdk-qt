// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRECOMMENDERRESPONSE_H
#define QTAWS_STOPRECOMMENDERRESPONSE_H

#include "personalizeresponse.h"
#include "stoprecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class StopRecommenderResponsePrivate;

class QTAWSPERSONALIZE_EXPORT StopRecommenderResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    StopRecommenderResponse(const StopRecommenderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopRecommenderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopRecommenderResponse)
    Q_DISABLE_COPY(StopRecommenderResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
