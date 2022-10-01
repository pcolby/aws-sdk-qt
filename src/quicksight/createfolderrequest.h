// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFOLDERREQUEST_H
#define QTAWS_CREATEFOLDERREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateFolderRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CreateFolderRequest : public QuickSightRequest {

public:
    CreateFolderRequest(const CreateFolderRequest &other);
    CreateFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFolderRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
