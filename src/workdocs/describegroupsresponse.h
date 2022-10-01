// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPSRESPONSE_H
#define QTAWS_DESCRIBEGROUPSRESPONSE_H

#include "workdocsresponse.h"
#include "describegroupsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeGroupsResponsePrivate;

class QTAWSWORKDOCS_EXPORT DescribeGroupsResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DescribeGroupsResponse(const DescribeGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGroupsResponse)
    Q_DISABLE_COPY(DescribeGroupsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
