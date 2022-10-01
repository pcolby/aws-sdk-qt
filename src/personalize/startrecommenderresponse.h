// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRECOMMENDERRESPONSE_H
#define QTAWS_STARTRECOMMENDERRESPONSE_H

#include "personalizeresponse.h"
#include "startrecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class StartRecommenderResponsePrivate;

class QTAWSPERSONALIZE_EXPORT StartRecommenderResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    StartRecommenderResponse(const StartRecommenderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartRecommenderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRecommenderResponse)
    Q_DISABLE_COPY(StartRecommenderResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
