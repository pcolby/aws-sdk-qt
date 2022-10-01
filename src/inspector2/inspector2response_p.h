// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSPECTOR2RESPONSE_P_H
#define QTAWS_INSPECTOR2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Inspector2 {

class Inspector2Response;

class Inspector2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Inspector2ResponsePrivate(Inspector2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Inspector2Response)
    Q_DISABLE_COPY(Inspector2ResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
