// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IVSRESPONSE_P_H
#define QTAWS_IVSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Ivs {

class IvsResponse;

class IvsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IvsResponsePrivate(IvsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IvsResponse)
    Q_DISABLE_COPY(IvsResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
