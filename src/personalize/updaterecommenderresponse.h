// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOMMENDERRESPONSE_H
#define QTAWS_UPDATERECOMMENDERRESPONSE_H

#include "personalizeresponse.h"
#include "updaterecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class UpdateRecommenderResponsePrivate;

class QTAWSPERSONALIZE_EXPORT UpdateRecommenderResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    UpdateRecommenderResponse(const UpdateRecommenderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRecommenderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecommenderResponse)
    Q_DISABLE_COPY(UpdateRecommenderResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
