// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFICATIONJOBSRESPONSE_H
#define QTAWS_LISTDOCUMENTCLASSIFICATIONJOBSRESPONSE_H

#include "comprehendresponse.h"
#include "listdocumentclassificationjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassificationJobsResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListDocumentClassificationJobsResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListDocumentClassificationJobsResponse(const ListDocumentClassificationJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDocumentClassificationJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDocumentClassificationJobsResponse)
    Q_DISABLE_COPY(ListDocumentClassificationJobsResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
