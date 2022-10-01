// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBERESOURCEPERMISSIONSRESPONSE_H

#include "workdocsresponse.h"
#include "describeresourcepermissionsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeResourcePermissionsResponsePrivate;

class QTAWSWORKDOCS_EXPORT DescribeResourcePermissionsResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DescribeResourcePermissionsResponse(const DescribeResourcePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeResourcePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourcePermissionsResponse)
    Q_DISABLE_COPY(DescribeResourcePermissionsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
