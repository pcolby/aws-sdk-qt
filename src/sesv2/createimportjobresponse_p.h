// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMPORTJOBRESPONSE_P_H
#define QTAWS_CREATEIMPORTJOBRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class CreateImportJobResponse;

class CreateImportJobResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit CreateImportJobResponsePrivate(CreateImportJobResponse * const q);

    void parseCreateImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateImportJobResponse)
    Q_DISABLE_COPY(CreateImportJobResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
