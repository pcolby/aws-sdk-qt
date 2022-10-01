// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATERANDOMRESPONSE_H
#define QTAWS_GENERATERANDOMRESPONSE_H

#include "kmsresponse.h"
#include "generaterandomrequest.h"

namespace QtAws {
namespace Kms {

class GenerateRandomResponsePrivate;

class QTAWSKMS_EXPORT GenerateRandomResponse : public KmsResponse {
    Q_OBJECT

public:
    GenerateRandomResponse(const GenerateRandomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateRandomRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateRandomResponse)
    Q_DISABLE_COPY(GenerateRandomResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
