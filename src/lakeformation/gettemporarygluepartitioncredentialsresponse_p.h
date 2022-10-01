// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPORARYGLUEPARTITIONCREDENTIALSRESPONSE_P_H
#define QTAWS_GETTEMPORARYGLUEPARTITIONCREDENTIALSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GetTemporaryGluePartitionCredentialsResponse;

class GetTemporaryGluePartitionCredentialsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GetTemporaryGluePartitionCredentialsResponsePrivate(GetTemporaryGluePartitionCredentialsResponse * const q);

    void parseGetTemporaryGluePartitionCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTemporaryGluePartitionCredentialsResponse)
    Q_DISABLE_COPY(GetTemporaryGluePartitionCredentialsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
