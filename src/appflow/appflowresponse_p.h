// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPFLOWRESPONSE_P_H
#define QTAWS_APPFLOWRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Appflow {

class AppflowResponse;

class AppflowResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AppflowResponsePrivate(AppflowResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AppflowResponse)
    Q_DISABLE_COPY(AppflowResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
