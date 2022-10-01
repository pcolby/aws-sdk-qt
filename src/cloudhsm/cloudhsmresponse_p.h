// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMRESPONSE_P_H
#define QTAWS_CLOUDHSMRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class CloudHsmResponse;

class CloudHsmResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudHsmResponsePrivate(CloudHsmResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudHsmResponse)
    Q_DISABLE_COPY(CloudHsmResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
