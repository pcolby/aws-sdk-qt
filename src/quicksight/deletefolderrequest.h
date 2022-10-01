// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERREQUEST_H
#define QTAWS_DELETEFOLDERREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteFolderRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteFolderRequest : public QuickSightRequest {

public:
    DeleteFolderRequest(const DeleteFolderRequest &other);
    DeleteFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFolderRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
