// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3CONTROLRESPONSE_P_H
#define QTAWS_S3CONTROLRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace S3Control {

class S3ControlResponse;

class S3ControlResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit S3ControlResponsePrivate(S3ControlResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(S3ControlResponse)
    Q_DISABLE_COPY(S3ControlResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
