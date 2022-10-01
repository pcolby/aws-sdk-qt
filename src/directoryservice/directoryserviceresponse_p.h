// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DIRECTORYSERVICERESPONSE_P_H
#define QTAWS_DIRECTORYSERVICERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DirectoryServiceResponse;

class DirectoryServiceResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DirectoryServiceResponsePrivate(DirectoryServiceResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DirectoryServiceResponse)
    Q_DISABLE_COPY(DirectoryServiceResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
