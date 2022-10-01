// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RBINRESPONSE_P_H
#define QTAWS_RBINRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Rbin {

class RbinResponse;

class RbinResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit RbinResponsePrivate(RbinResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RbinResponse)
    Q_DISABLE_COPY(RbinResponsePrivate)

};

} // namespace Rbin
} // namespace QtAws

#endif
