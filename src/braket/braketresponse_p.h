// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BRAKETRESPONSE_P_H
#define QTAWS_BRAKETRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Braket {

class BraketResponse;

class BraketResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit BraketResponsePrivate(BraketResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BraketResponse)
    Q_DISABLE_COPY(BraketResponsePrivate)

};

} // namespace Braket
} // namespace QtAws

#endif
