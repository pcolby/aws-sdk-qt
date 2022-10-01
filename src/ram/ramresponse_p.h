// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RAMRESPONSE_P_H
#define QTAWS_RAMRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Ram {

class RamResponse;

class RamResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit RamResponsePrivate(RamResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RamResponse)
    Q_DISABLE_COPY(RamResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
