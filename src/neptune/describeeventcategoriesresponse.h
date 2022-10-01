// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTCATEGORIESRESPONSE_H
#define QTAWS_DESCRIBEEVENTCATEGORIESRESPONSE_H

#include "neptuneresponse.h"
#include "describeeventcategoriesrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeEventCategoriesResponsePrivate;

class QTAWSNEPTUNE_EXPORT DescribeEventCategoriesResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DescribeEventCategoriesResponse(const DescribeEventCategoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventCategoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventCategoriesResponse)
    Q_DISABLE_COPY(DescribeEventCategoriesResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
