// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDERRESPONSE_H
#define QTAWS_DELETERECOMMENDERRESPONSE_H

#include "personalizeresponse.h"
#include "deleterecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class DeleteRecommenderResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DeleteRecommenderResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DeleteRecommenderResponse(const DeleteRecommenderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRecommenderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecommenderResponse)
    Q_DISABLE_COPY(DeleteRecommenderResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
