// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERSRESPONSE_H
#define QTAWS_DESCRIBEUSERSRESPONSE_H

#include "workdocsresponse.h"
#include "describeusersrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeUsersResponsePrivate;

class QTAWSWORKDOCS_EXPORT DescribeUsersResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DescribeUsersResponse(const DescribeUsersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUsersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUsersResponse)
    Q_DISABLE_COPY(DescribeUsersResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
