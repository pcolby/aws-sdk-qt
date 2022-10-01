// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFOLDERREQUEST_H
#define QTAWS_UPDATEFOLDERREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateFolderRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateFolderRequest : public QuickSightRequest {

public:
    UpdateFolderRequest(const UpdateFolderRequest &other);
    UpdateFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFolderRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
