// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTVERSIONSRESPONSE_H
#define QTAWS_DESCRIBEDOCUMENTVERSIONSRESPONSE_H

#include "workdocsresponse.h"
#include "describedocumentversionsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeDocumentVersionsResponsePrivate;

class QTAWSWORKDOCS_EXPORT DescribeDocumentVersionsResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DescribeDocumentVersionsResponse(const DescribeDocumentVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDocumentVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDocumentVersionsResponse)
    Q_DISABLE_COPY(DescribeDocumentVersionsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
