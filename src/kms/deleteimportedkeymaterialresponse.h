// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMPORTEDKEYMATERIALRESPONSE_H
#define QTAWS_DELETEIMPORTEDKEYMATERIALRESPONSE_H

#include "kmsresponse.h"
#include "deleteimportedkeymaterialrequest.h"

namespace QtAws {
namespace Kms {

class DeleteImportedKeyMaterialResponsePrivate;

class QTAWSKMS_EXPORT DeleteImportedKeyMaterialResponse : public KmsResponse {
    Q_OBJECT

public:
    DeleteImportedKeyMaterialResponse(const DeleteImportedKeyMaterialRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteImportedKeyMaterialRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImportedKeyMaterialResponse)
    Q_DISABLE_COPY(DeleteImportedKeyMaterialResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
