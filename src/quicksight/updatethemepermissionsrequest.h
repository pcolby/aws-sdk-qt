// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMEPERMISSIONSREQUEST_H
#define QTAWS_UPDATETHEMEPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateThemePermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateThemePermissionsRequest : public QuickSightRequest {

public:
    UpdateThemePermissionsRequest(const UpdateThemePermissionsRequest &other);
    UpdateThemePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThemePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
