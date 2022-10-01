// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFOLDERSREQUEST_H
#define QTAWS_LISTFOLDERSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListFoldersRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListFoldersRequest : public QuickSightRequest {

public:
    ListFoldersRequest(const ListFoldersRequest &other);
    ListFoldersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFoldersRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
