// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACEDATARESPONSE_P_H
#define QTAWS_FINSPACEDATARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class FinspaceDataResponse;

class FinspaceDataResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit FinspaceDataResponsePrivate(FinspaceDataResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FinspaceDataResponse)
    Q_DISABLE_COPY(FinspaceDataResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
