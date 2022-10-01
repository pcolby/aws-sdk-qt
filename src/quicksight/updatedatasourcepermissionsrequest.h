// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCEPERMISSIONSREQUEST_H
#define QTAWS_UPDATEDATASOURCEPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDataSourcePermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateDataSourcePermissionsRequest : public QuickSightRequest {

public:
    UpdateDataSourcePermissionsRequest(const UpdateDataSourcePermissionsRequest &other);
    UpdateDataSourcePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataSourcePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
