// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPORARYGLUETABLECREDENTIALSRESPONSE_P_H
#define QTAWS_GETTEMPORARYGLUETABLECREDENTIALSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GetTemporaryGlueTableCredentialsResponse;

class GetTemporaryGlueTableCredentialsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GetTemporaryGlueTableCredentialsResponsePrivate(GetTemporaryGlueTableCredentialsResponse * const q);

    void parseGetTemporaryGlueTableCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTemporaryGlueTableCredentialsResponse)
    Q_DISABLE_COPY(GetTemporaryGlueTableCredentialsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
