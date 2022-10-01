// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDERRESPONSE_H
#define QTAWS_CREATERECOMMENDERRESPONSE_H

#include "personalizeresponse.h"
#include "createrecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class CreateRecommenderResponsePrivate;

class QTAWSPERSONALIZE_EXPORT CreateRecommenderResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateRecommenderResponse(const CreateRecommenderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRecommenderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecommenderResponse)
    Q_DISABLE_COPY(CreateRecommenderResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
