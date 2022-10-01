// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKSPACESWEBRESPONSE_P_H
#define QTAWS_WORKSPACESWEBRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class WorkSpacesWebResponse;

class WorkSpacesWebResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit WorkSpacesWebResponsePrivate(WorkSpacesWebResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WorkSpacesWebResponse)
    Q_DISABLE_COPY(WorkSpacesWebResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
