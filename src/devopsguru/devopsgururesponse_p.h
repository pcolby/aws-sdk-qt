// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEVOPSGURURESPONSE_P_H
#define QTAWS_DEVOPSGURURESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DevOpsGuruResponse;

class DevOpsGuruResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DevOpsGuruResponsePrivate(DevOpsGuruResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DevOpsGuruResponse)
    Q_DISABLE_COPY(DevOpsGuruResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
