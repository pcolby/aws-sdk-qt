// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMESPACESREQUEST_H
#define QTAWS_LISTNAMESPACESREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListNamespacesRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListNamespacesRequest : public QuickSightRequest {

public:
    ListNamespacesRequest(const ListNamespacesRequest &other);
    ListNamespacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNamespacesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
