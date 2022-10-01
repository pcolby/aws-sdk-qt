// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETSREQUEST_H
#define QTAWS_LISTASSETSREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class ListAssetsRequestPrivate;

class QTAWSOUTPOSTS_EXPORT ListAssetsRequest : public OutpostsRequest {

public:
    ListAssetsRequest(const ListAssetsRequest &other);
    ListAssetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssetsRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
