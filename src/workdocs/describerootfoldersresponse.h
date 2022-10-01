// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROOTFOLDERSRESPONSE_H
#define QTAWS_DESCRIBEROOTFOLDERSRESPONSE_H

#include "workdocsresponse.h"
#include "describerootfoldersrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeRootFoldersResponsePrivate;

class QTAWSWORKDOCS_EXPORT DescribeRootFoldersResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DescribeRootFoldersResponse(const DescribeRootFoldersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRootFoldersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRootFoldersResponse)
    Q_DISABLE_COPY(DescribeRootFoldersResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
