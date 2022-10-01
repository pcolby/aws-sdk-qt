// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBEFOLDERPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderPermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeFolderPermissionsRequest : public QuickSightRequest {

public:
    DescribeFolderPermissionsRequest(const DescribeFolderPermissionsRequest &other);
    DescribeFolderPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFolderPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
