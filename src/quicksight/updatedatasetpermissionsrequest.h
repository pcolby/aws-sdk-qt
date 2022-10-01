// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETPERMISSIONSREQUEST_H
#define QTAWS_UPDATEDATASETPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDataSetPermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateDataSetPermissionsRequest : public QuickSightRequest {

public:
    UpdateDataSetPermissionsRequest(const UpdateDataSetPermissionsRequest &other);
    UpdateDataSetPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataSetPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
