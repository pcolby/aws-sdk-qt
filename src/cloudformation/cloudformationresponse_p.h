// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDFORMATIONRESPONSE_P_H
#define QTAWS_CLOUDFORMATIONRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class CloudFormationResponse;

class CloudFormationResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudFormationResponsePrivate(CloudFormationResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudFormationResponse)
    Q_DISABLE_COPY(CloudFormationResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
