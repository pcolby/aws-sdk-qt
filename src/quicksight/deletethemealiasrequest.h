// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHEMEALIASREQUEST_H
#define QTAWS_DELETETHEMEALIASREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteThemeAliasRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteThemeAliasRequest : public QuickSightRequest {

public:
    DeleteThemeAliasRequest(const DeleteThemeAliasRequest &other);
    DeleteThemeAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThemeAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
