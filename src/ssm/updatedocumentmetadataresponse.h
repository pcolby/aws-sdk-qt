// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTMETADATARESPONSE_H
#define QTAWS_UPDATEDOCUMENTMETADATARESPONSE_H

#include "ssmresponse.h"
#include "updatedocumentmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class UpdateDocumentMetadataResponsePrivate;

class QTAWSSSM_EXPORT UpdateDocumentMetadataResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateDocumentMetadataResponse(const UpdateDocumentMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDocumentMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentMetadataResponse)
    Q_DISABLE_COPY(UpdateDocumentMetadataResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
