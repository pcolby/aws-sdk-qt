// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTKEYMATERIALRESPONSE_H
#define QTAWS_IMPORTKEYMATERIALRESPONSE_H

#include "kmsresponse.h"
#include "importkeymaterialrequest.h"

namespace QtAws {
namespace Kms {

class ImportKeyMaterialResponsePrivate;

class QTAWSKMS_EXPORT ImportKeyMaterialResponse : public KmsResponse {
    Q_OBJECT

public:
    ImportKeyMaterialResponse(const ImportKeyMaterialRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportKeyMaterialRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportKeyMaterialResponse)
    Q_DISABLE_COPY(ImportKeyMaterialResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
