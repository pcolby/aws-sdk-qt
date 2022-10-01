// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTRESPONSE_H
#define QTAWS_CREATEDOCUMENTRESPONSE_H

#include "ssmresponse.h"
#include "createdocumentrequest.h"

namespace QtAws {
namespace Ssm {

class CreateDocumentResponsePrivate;

class QTAWSSSM_EXPORT CreateDocumentResponse : public SsmResponse {
    Q_OBJECT

public:
    CreateDocumentResponse(const CreateDocumentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDocumentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDocumentResponse)
    Q_DISABLE_COPY(CreateDocumentResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
