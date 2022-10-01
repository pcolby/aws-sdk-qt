// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WELLARCHITECTEDRESPONSE_P_H
#define QTAWS_WELLARCHITECTEDRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class WellArchitectedResponse;

class WellArchitectedResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit WellArchitectedResponsePrivate(WellArchitectedResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WellArchitectedResponse)
    Q_DISABLE_COPY(WellArchitectedResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
