// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHSCHEMARESPONSE_P_H
#define QTAWS_PUBLISHSCHEMARESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class PublishSchemaResponse;

class PublishSchemaResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit PublishSchemaResponsePrivate(PublishSchemaResponse * const q);

    void parsePublishSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PublishSchemaResponse)
    Q_DISABLE_COPY(PublishSchemaResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
