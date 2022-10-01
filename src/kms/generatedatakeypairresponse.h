// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYPAIRRESPONSE_H
#define QTAWS_GENERATEDATAKEYPAIRRESPONSE_H

#include "kmsresponse.h"
#include "generatedatakeypairrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyPairResponsePrivate;

class QTAWSKMS_EXPORT GenerateDataKeyPairResponse : public KmsResponse {
    Q_OBJECT

public:
    GenerateDataKeyPairResponse(const GenerateDataKeyPairRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateDataKeyPairRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateDataKeyPairResponse)
    Q_DISABLE_COPY(GenerateDataKeyPairResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
