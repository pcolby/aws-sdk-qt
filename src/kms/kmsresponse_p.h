// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KMSRESPONSE_P_H
#define QTAWS_KMSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Kms {

class KmsResponse;

class KmsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit KmsResponsePrivate(KmsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KmsResponse)
    Q_DISABLE_COPY(KmsResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
