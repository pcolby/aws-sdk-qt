// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DRSRESPONSE_P_H
#define QTAWS_DRSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Drs {

class DrsResponse;

class DrsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DrsResponsePrivate(DrsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DrsResponse)
    Q_DISABLE_COPY(DrsResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
