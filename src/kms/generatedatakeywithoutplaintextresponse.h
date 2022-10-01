// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYWITHOUTPLAINTEXTRESPONSE_H
#define QTAWS_GENERATEDATAKEYWITHOUTPLAINTEXTRESPONSE_H

#include "kmsresponse.h"
#include "generatedatakeywithoutplaintextrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyWithoutPlaintextResponsePrivate;

class QTAWSKMS_EXPORT GenerateDataKeyWithoutPlaintextResponse : public KmsResponse {
    Q_OBJECT

public:
    GenerateDataKeyWithoutPlaintextResponse(const GenerateDataKeyWithoutPlaintextRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateDataKeyWithoutPlaintextRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateDataKeyWithoutPlaintextResponse)
    Q_DISABLE_COPY(GenerateDataKeyWithoutPlaintextResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
