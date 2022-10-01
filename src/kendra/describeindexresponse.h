// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINDEXRESPONSE_H
#define QTAWS_DESCRIBEINDEXRESPONSE_H

#include "kendraresponse.h"
#include "describeindexrequest.h"

namespace QtAws {
namespace Kendra {

class DescribeIndexResponsePrivate;

class QTAWSKENDRA_EXPORT DescribeIndexResponse : public KendraResponse {
    Q_OBJECT

public:
    DescribeIndexResponse(const DescribeIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIndexResponse)
    Q_DISABLE_COPY(DescribeIndexResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
