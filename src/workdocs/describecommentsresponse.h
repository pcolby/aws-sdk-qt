// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMMENTSRESPONSE_H
#define QTAWS_DESCRIBECOMMENTSRESPONSE_H

#include "workdocsresponse.h"
#include "describecommentsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeCommentsResponsePrivate;

class QTAWSWORKDOCS_EXPORT DescribeCommentsResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DescribeCommentsResponse(const DescribeCommentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCommentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCommentsResponse)
    Q_DISABLE_COPY(DescribeCommentsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
