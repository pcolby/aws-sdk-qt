// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMESREQUEST_H
#define QTAWS_LISTTHEMESREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListThemesRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListThemesRequest : public QuickSightRequest {

public:
    ListThemesRequest(const ListThemesRequest &other);
    ListThemesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThemesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
