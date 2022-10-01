// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYRESPONSE_H
#define QTAWS_GENERATEDATAKEYRESPONSE_H

#include "kmsresponse.h"
#include "generatedatakeyrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyResponsePrivate;

class QTAWSKMS_EXPORT GenerateDataKeyResponse : public KmsResponse {
    Q_OBJECT

public:
    GenerateDataKeyResponse(const GenerateDataKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateDataKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateDataKeyResponse)
    Q_DISABLE_COPY(GenerateDataKeyResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
