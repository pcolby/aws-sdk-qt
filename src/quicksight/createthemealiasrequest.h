// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHEMEALIASREQUEST_H
#define QTAWS_CREATETHEMEALIASREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateThemeAliasRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CreateThemeAliasRequest : public QuickSightRequest {

public:
    CreateThemeAliasRequest(const CreateThemeAliasRequest &other);
    CreateThemeAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateThemeAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
