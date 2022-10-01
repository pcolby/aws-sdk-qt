// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPRUNNERRESPONSE_P_H
#define QTAWS_APPRUNNERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AppRunner {

class AppRunnerResponse;

class AppRunnerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AppRunnerResponsePrivate(AppRunnerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AppRunnerResponse)
    Q_DISABLE_COPY(AppRunnerResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
