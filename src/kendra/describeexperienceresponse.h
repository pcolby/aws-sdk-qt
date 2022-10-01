// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPERIENCERESPONSE_H
#define QTAWS_DESCRIBEEXPERIENCERESPONSE_H

#include "kendraresponse.h"
#include "describeexperiencerequest.h"

namespace QtAws {
namespace Kendra {

class DescribeExperienceResponsePrivate;

class QTAWSKENDRA_EXPORT DescribeExperienceResponse : public KendraResponse {
    Q_OBJECT

public:
    DescribeExperienceResponse(const DescribeExperienceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeExperienceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExperienceResponse)
    Q_DISABLE_COPY(DescribeExperienceResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
