// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDERSRESPONSE_H
#define QTAWS_LISTRECOMMENDERSRESPONSE_H

#include "personalizeresponse.h"
#include "listrecommendersrequest.h"

namespace QtAws {
namespace Personalize {

class ListRecommendersResponsePrivate;

class QTAWSPERSONALIZE_EXPORT ListRecommendersResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    ListRecommendersResponse(const ListRecommendersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecommendersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecommendersResponse)
    Q_DISABLE_COPY(ListRecommendersResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
