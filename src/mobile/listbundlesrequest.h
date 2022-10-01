// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUNDLESREQUEST_H
#define QTAWS_LISTBUNDLESREQUEST_H

#include "mobilerequest.h"

namespace QtAws {
namespace Mobile {

class ListBundlesRequestPrivate;

class QTAWSMOBILE_EXPORT ListBundlesRequest : public MobileRequest {

public:
    ListBundlesRequest(const ListBundlesRequest &other);
    ListBundlesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBundlesRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
