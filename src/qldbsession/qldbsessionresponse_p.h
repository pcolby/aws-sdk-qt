// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBSESSIONRESPONSE_P_H
#define QTAWS_QLDBSESSIONRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace QldbSession {

class QldbSessionResponse;

class QldbSessionResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit QldbSessionResponsePrivate(QldbSessionResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QldbSessionResponse)
    Q_DISABLE_COPY(QldbSessionResponsePrivate)

};

} // namespace QldbSession
} // namespace QtAws

#endif
