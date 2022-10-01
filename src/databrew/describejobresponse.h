// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBRESPONSE_H
#define QTAWS_DESCRIBEJOBRESPONSE_H

#include "databrewresponse.h"
#include "describejobrequest.h"

namespace QtAws {
namespace DataBrew {

class DescribeJobResponsePrivate;

class QTAWSDATABREW_EXPORT DescribeJobResponse : public DataBrewResponse {
    Q_OBJECT

public:
    DescribeJobResponse(const DescribeJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobResponse)
    Q_DISABLE_COPY(DescribeJobResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
