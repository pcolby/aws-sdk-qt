// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYPAIRWITHOUTPLAINTEXTRESPONSE_H
#define QTAWS_GENERATEDATAKEYPAIRWITHOUTPLAINTEXTRESPONSE_H

#include "kmsresponse.h"
#include "generatedatakeypairwithoutplaintextrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyPairWithoutPlaintextResponsePrivate;

class QTAWSKMS_EXPORT GenerateDataKeyPairWithoutPlaintextResponse : public KmsResponse {
    Q_OBJECT

public:
    GenerateDataKeyPairWithoutPlaintextResponse(const GenerateDataKeyPairWithoutPlaintextRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateDataKeyPairWithoutPlaintextRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateDataKeyPairWithoutPlaintextResponse)
    Q_DISABLE_COPY(GenerateDataKeyPairWithoutPlaintextResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
