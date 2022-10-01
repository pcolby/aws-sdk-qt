// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBRESPONSE_P_H
#define QTAWS_QLDBRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Qldb {

class QldbResponse;

class QldbResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit QldbResponsePrivate(QldbResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QldbResponse)
    Q_DISABLE_COPY(QldbResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
