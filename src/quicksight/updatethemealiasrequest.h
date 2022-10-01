// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMEALIASREQUEST_H
#define QTAWS_UPDATETHEMEALIASREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateThemeAliasRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateThemeAliasRequest : public QuickSightRequest {

public:
    UpdateThemeAliasRequest(const UpdateThemeAliasRequest &other);
    UpdateThemeAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThemeAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
