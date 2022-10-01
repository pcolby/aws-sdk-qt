// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTJOBRESPONSE_P_H
#define QTAWS_GETIMPORTJOBRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetImportJobResponse;

class GetImportJobResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetImportJobResponsePrivate(GetImportJobResponse * const q);

    void parseGetImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetImportJobResponse)
    Q_DISABLE_COPY(GetImportJobResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
