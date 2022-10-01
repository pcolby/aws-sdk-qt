// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTRESPONSE_H
#define QTAWS_UPDATEDOCUMENTRESPONSE_H

#include "ssmresponse.h"
#include "updatedocumentrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateDocumentResponsePrivate;

class QTAWSSSM_EXPORT UpdateDocumentResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateDocumentResponse(const UpdateDocumentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDocumentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentResponse)
    Q_DISABLE_COPY(UpdateDocumentResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
