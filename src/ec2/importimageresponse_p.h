// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTIMAGERESPONSE_P_H
#define QTAWS_IMPORTIMAGERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ImportImageResponse;

class ImportImageResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ImportImageResponsePrivate(ImportImageResponse * const q);

    void parseImportImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportImageResponse)
    Q_DISABLE_COPY(ImportImageResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
