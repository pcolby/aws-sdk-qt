// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKMAILRESPONSE_P_H
#define QTAWS_WORKMAILRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace WorkMail {

class WorkMailResponse;

class WorkMailResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit WorkMailResponsePrivate(WorkMailResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WorkMailResponse)
    Q_DISABLE_COPY(WorkMailResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
