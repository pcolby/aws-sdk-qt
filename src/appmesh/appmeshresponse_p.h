// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPMESHRESPONSE_P_H
#define QTAWS_APPMESHRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AppMesh {

class AppMeshResponse;

class AppMeshResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AppMeshResponsePrivate(AppMeshResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AppMeshResponse)
    Q_DISABLE_COPY(AppMeshResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
