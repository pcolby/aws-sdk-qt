// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRPUBLICRESPONSE_P_H
#define QTAWS_ECRPUBLICRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class EcrPublicResponse;

class EcrPublicResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit EcrPublicResponsePrivate(EcrPublicResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EcrPublicResponse)
    Q_DISABLE_COPY(EcrPublicResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
