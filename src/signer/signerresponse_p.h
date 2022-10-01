// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNERRESPONSE_P_H
#define QTAWS_SIGNERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Signer {

class SignerResponse;

class SignerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SignerResponsePrivate(SignerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SignerResponse)
    Q_DISABLE_COPY(SignerResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
