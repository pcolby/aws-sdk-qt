// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERCONTENTSRESPONSE_H
#define QTAWS_DESCRIBEFOLDERCONTENTSRESPONSE_H

#include "workdocsresponse.h"
#include "describefoldercontentsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeFolderContentsResponsePrivate;

class QTAWSWORKDOCS_EXPORT DescribeFolderContentsResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DescribeFolderContentsResponse(const DescribeFolderContentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFolderContentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFolderContentsResponse)
    Q_DISABLE_COPY(DescribeFolderContentsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
