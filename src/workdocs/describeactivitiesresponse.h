// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITIESRESPONSE_H
#define QTAWS_DESCRIBEACTIVITIESRESPONSE_H

#include "workdocsresponse.h"
#include "describeactivitiesrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeActivitiesResponsePrivate;

class QTAWSWORKDOCS_EXPORT DescribeActivitiesResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DescribeActivitiesResponse(const DescribeActivitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeActivitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActivitiesResponse)
    Q_DISABLE_COPY(DescribeActivitiesResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
