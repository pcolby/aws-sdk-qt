// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTENTRESPONSE_H
#define QTAWS_DESCRIBEINTENTRESPONSE_H

#include "lexmodelsv2response.h"
#include "describeintentrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeIntentResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeIntentResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DescribeIntentResponse(const DescribeIntentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIntentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIntentResponse)
    Q_DISABLE_COPY(DescribeIntentResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
