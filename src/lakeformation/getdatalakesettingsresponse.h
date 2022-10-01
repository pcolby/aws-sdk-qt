// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATALAKESETTINGSRESPONSE_H
#define QTAWS_GETDATALAKESETTINGSRESPONSE_H

#include "lakeformationresponse.h"
#include "getdatalakesettingsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetDataLakeSettingsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT GetDataLakeSettingsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    GetDataLakeSettingsResponse(const GetDataLakeSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataLakeSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataLakeSettingsResponse)
    Q_DISABLE_COPY(GetDataLakeSettingsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
