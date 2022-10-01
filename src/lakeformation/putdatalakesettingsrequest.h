// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDATALAKESETTINGSREQUEST_H
#define QTAWS_PUTDATALAKESETTINGSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class PutDataLakeSettingsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT PutDataLakeSettingsRequest : public LakeFormationRequest {

public:
    PutDataLakeSettingsRequest(const PutDataLakeSettingsRequest &other);
    PutDataLakeSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDataLakeSettingsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
