// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTDEFAULTVERSIONRESPONSE_H
#define QTAWS_UPDATEDOCUMENTDEFAULTVERSIONRESPONSE_H

#include "ssmresponse.h"
#include "updatedocumentdefaultversionrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateDocumentDefaultVersionResponsePrivate;

class QTAWSSSM_EXPORT UpdateDocumentDefaultVersionResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateDocumentDefaultVersionResponse(const UpdateDocumentDefaultVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDocumentDefaultVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentDefaultVersionResponse)
    Q_DISABLE_COPY(UpdateDocumentDefaultVersionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
