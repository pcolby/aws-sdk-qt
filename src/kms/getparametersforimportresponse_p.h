// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSFORIMPORTRESPONSE_P_H
#define QTAWS_GETPARAMETERSFORIMPORTRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class GetParametersForImportResponse;

class GetParametersForImportResponsePrivate : public KmsResponsePrivate {

public:

    explicit GetParametersForImportResponsePrivate(GetParametersForImportResponse * const q);

    void parseGetParametersForImportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetParametersForImportResponse)
    Q_DISABLE_COPY(GetParametersForImportResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
