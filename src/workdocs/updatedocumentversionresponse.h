// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTVERSIONRESPONSE_H
#define QTAWS_UPDATEDOCUMENTVERSIONRESPONSE_H

#include "workdocsresponse.h"
#include "updatedocumentversionrequest.h"

namespace QtAws {
namespace WorkDocs {

class UpdateDocumentVersionResponsePrivate;

class QTAWSWORKDOCS_EXPORT UpdateDocumentVersionResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    UpdateDocumentVersionResponse(const UpdateDocumentVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDocumentVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentVersionResponse)
    Q_DISABLE_COPY(UpdateDocumentVersionResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
