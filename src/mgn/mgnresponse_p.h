// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MGNRESPONSE_P_H
#define QTAWS_MGNRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Mgn {

class MgnResponse;

class MgnResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MgnResponsePrivate(MgnResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MgnResponse)
    Q_DISABLE_COPY(MgnResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
