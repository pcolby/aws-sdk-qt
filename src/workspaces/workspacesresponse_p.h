// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKSPACESRESPONSE_P_H
#define QTAWS_WORKSPACESRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class WorkSpacesResponse;

class WorkSpacesResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit WorkSpacesResponsePrivate(WorkSpacesResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WorkSpacesResponse)
    Q_DISABLE_COPY(WorkSpacesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
