// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATALAKESETTINGSREQUEST_H
#define QTAWS_GETDATALAKESETTINGSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetDataLakeSettingsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT GetDataLakeSettingsRequest : public LakeFormationRequest {

public:
    GetDataLakeSettingsRequest(const GetDataLakeSettingsRequest &other);
    GetDataLakeSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataLakeSettingsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
