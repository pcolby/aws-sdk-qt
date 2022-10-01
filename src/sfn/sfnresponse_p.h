// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SFNRESPONSE_P_H
#define QTAWS_SFNRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Sfn {

class SfnResponse;

class SfnResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SfnResponsePrivate(SfnResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SfnResponse)
    Q_DISABLE_COPY(SfnResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
