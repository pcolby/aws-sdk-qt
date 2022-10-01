// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUICKSIGHTRESPONSE_P_H
#define QTAWS_QUICKSIGHTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace QuickSight {

class QuickSightResponse;

class QuickSightResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit QuickSightResponsePrivate(QuickSightResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QuickSightResponse)
    Q_DISABLE_COPY(QuickSightResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
