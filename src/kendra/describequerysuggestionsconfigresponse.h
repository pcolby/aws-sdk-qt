// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYSUGGESTIONSCONFIGRESPONSE_H
#define QTAWS_DESCRIBEQUERYSUGGESTIONSCONFIGRESPONSE_H

#include "kendraresponse.h"
#include "describequerysuggestionsconfigrequest.h"

namespace QtAws {
namespace Kendra {

class DescribeQuerySuggestionsConfigResponsePrivate;

class QTAWSKENDRA_EXPORT DescribeQuerySuggestionsConfigResponse : public KendraResponse {
    Q_OBJECT

public:
    DescribeQuerySuggestionsConfigResponse(const DescribeQuerySuggestionsConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeQuerySuggestionsConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQuerySuggestionsConfigResponse)
    Q_DISABLE_COPY(DescribeQuerySuggestionsConfigResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
