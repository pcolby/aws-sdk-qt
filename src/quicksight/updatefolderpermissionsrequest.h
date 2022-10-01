// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFOLDERPERMISSIONSREQUEST_H
#define QTAWS_UPDATEFOLDERPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateFolderPermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateFolderPermissionsRequest : public QuickSightRequest {

public:
    UpdateFolderPermissionsRequest(const UpdateFolderPermissionsRequest &other);
    UpdateFolderPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFolderPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
