// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMMETADATARESPONSE_H
#define QTAWS_DELETECUSTOMMETADATARESPONSE_H

#include "workdocsresponse.h"
#include "deletecustommetadatarequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteCustomMetadataResponsePrivate;

class QTAWSWORKDOCS_EXPORT DeleteCustomMetadataResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DeleteCustomMetadataResponse(const DeleteCustomMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomMetadataResponse)
    Q_DISABLE_COPY(DeleteCustomMetadataResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
