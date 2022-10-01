// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADENTITYDEFINITIONSRESPONSE_P_H
#define QTAWS_UPLOADENTITYDEFINITIONSRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class UploadEntityDefinitionsResponse;

class UploadEntityDefinitionsResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit UploadEntityDefinitionsResponsePrivate(UploadEntityDefinitionsResponse * const q);

    void parseUploadEntityDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UploadEntityDefinitionsResponse)
    Q_DISABLE_COPY(UploadEntityDefinitionsResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
