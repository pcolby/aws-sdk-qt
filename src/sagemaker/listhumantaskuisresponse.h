// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHUMANTASKUISRESPONSE_H
#define QTAWS_LISTHUMANTASKUISRESPONSE_H

#include "sagemakerresponse.h"
#include "listhumantaskuisrequest.h"

namespace QtAws {
namespace SageMaker {

class ListHumanTaskUisResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListHumanTaskUisResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListHumanTaskUisResponse(const ListHumanTaskUisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHumanTaskUisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHumanTaskUisResponse)
    Q_DISABLE_COPY(ListHumanTaskUisResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
