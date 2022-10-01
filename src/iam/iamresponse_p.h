// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IAMRESPONSE_P_H
#define QTAWS_IAMRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Iam {

class IamResponse;

class IamResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IamResponsePrivate(IamResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IamResponse)
    Q_DISABLE_COPY(IamResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
