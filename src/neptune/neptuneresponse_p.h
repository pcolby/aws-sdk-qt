// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NEPTUNERESPONSE_P_H
#define QTAWS_NEPTUNERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Neptune {

class NeptuneResponse;

class NeptuneResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit NeptuneResponsePrivate(NeptuneResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NeptuneResponse)
    Q_DISABLE_COPY(NeptuneResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
