// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMEALIASESREQUEST_H
#define QTAWS_LISTTHEMEALIASESREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListThemeAliasesRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListThemeAliasesRequest : public QuickSightRequest {

public:
    ListThemeAliasesRequest(const ListThemeAliasesRequest &other);
    ListThemeAliasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThemeAliasesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
