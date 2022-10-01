// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDATALAKESETTINGSRESPONSE_H
#define QTAWS_PUTDATALAKESETTINGSRESPONSE_H

#include "lakeformationresponse.h"
#include "putdatalakesettingsrequest.h"

namespace QtAws {
namespace LakeFormation {

class PutDataLakeSettingsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT PutDataLakeSettingsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    PutDataLakeSettingsResponse(const PutDataLakeSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDataLakeSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDataLakeSettingsResponse)
    Q_DISABLE_COPY(PutDataLakeSettingsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
