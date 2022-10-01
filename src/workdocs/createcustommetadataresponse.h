// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMMETADATARESPONSE_H
#define QTAWS_CREATECUSTOMMETADATARESPONSE_H

#include "workdocsresponse.h"
#include "createcustommetadatarequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateCustomMetadataResponsePrivate;

class QTAWSWORKDOCS_EXPORT CreateCustomMetadataResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    CreateCustomMetadataResponse(const CreateCustomMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomMetadataResponse)
    Q_DISABLE_COPY(CreateCustomMetadataResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
