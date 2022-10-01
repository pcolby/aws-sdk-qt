// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLAYERVERSIONPERMISSIONRESPONSE_P_H
#define QTAWS_ADDLAYERVERSIONPERMISSIONRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class AddLayerVersionPermissionResponse;

class AddLayerVersionPermissionResponsePrivate : public LambdaResponsePrivate {

public:

    explicit AddLayerVersionPermissionResponsePrivate(AddLayerVersionPermissionResponse * const q);

    void parseAddLayerVersionPermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddLayerVersionPermissionResponse)
    Q_DISABLE_COPY(AddLayerVersionPermissionResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
