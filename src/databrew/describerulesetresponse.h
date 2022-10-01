// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESETRESPONSE_H
#define QTAWS_DESCRIBERULESETRESPONSE_H

#include "databrewresponse.h"
#include "describerulesetrequest.h"

namespace QtAws {
namespace DataBrew {

class DescribeRulesetResponsePrivate;

class QTAWSDATABREW_EXPORT DescribeRulesetResponse : public DataBrewResponse {
    Q_OBJECT

public:
    DescribeRulesetResponse(const DescribeRulesetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRulesetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRulesetResponse)
    Q_DISABLE_COPY(DescribeRulesetResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
