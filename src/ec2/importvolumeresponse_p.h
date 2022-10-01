// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTVOLUMERESPONSE_P_H
#define QTAWS_IMPORTVOLUMERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ImportVolumeResponse;

class ImportVolumeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ImportVolumeResponsePrivate(ImportVolumeResponse * const q);

    void parseImportVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportVolumeResponse)
    Q_DISABLE_COPY(ImportVolumeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
