// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPSWORKSRESPONSE_P_H
#define QTAWS_OPSWORKSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class OpsWorksResponse;

class OpsWorksResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit OpsWorksResponsePrivate(OpsWorksResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(OpsWorksResponse)
    Q_DISABLE_COPY(OpsWorksResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
