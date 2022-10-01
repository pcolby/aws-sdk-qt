// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERRESOLVEDPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBEFOLDERRESOLVEDPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderResolvedPermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeFolderResolvedPermissionsRequest : public QuickSightRequest {

public:
    DescribeFolderResolvedPermissionsRequest(const DescribeFolderResolvedPermissionsRequest &other);
    DescribeFolderResolvedPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFolderResolvedPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
