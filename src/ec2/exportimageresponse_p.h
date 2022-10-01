// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTIMAGERESPONSE_P_H
#define QTAWS_EXPORTIMAGERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ExportImageResponse;

class ExportImageResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ExportImageResponsePrivate(ExportImageResponse * const q);

    void parseExportImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportImageResponse)
    Q_DISABLE_COPY(ExportImageResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
