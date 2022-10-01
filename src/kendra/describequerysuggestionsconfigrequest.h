// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYSUGGESTIONSCONFIGREQUEST_H
#define QTAWS_DESCRIBEQUERYSUGGESTIONSCONFIGREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DescribeQuerySuggestionsConfigRequestPrivate;

class QTAWSKENDRA_EXPORT DescribeQuerySuggestionsConfigRequest : public KendraRequest {

public:
    DescribeQuerySuggestionsConfigRequest(const DescribeQuerySuggestionsConfigRequest &other);
    DescribeQuerySuggestionsConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQuerySuggestionsConfigRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
