// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDERRESPONSE_H
#define QTAWS_DESCRIBERECOMMENDERRESPONSE_H

#include "personalizeresponse.h"
#include "describerecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeRecommenderResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeRecommenderResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeRecommenderResponse(const DescribeRecommenderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRecommenderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecommenderResponse)
    Q_DISABLE_COPY(DescribeRecommenderResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
