// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTPERMISSIONSREQUEST_H
#define QTAWS_LISTACCOUNTPERMISSIONSREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class ListAccountPermissionsRequestPrivate;

class QTAWSINSPECTOR2_EXPORT ListAccountPermissionsRequest : public Inspector2Request {

public:
    ListAccountPermissionsRequest(const ListAccountPermissionsRequest &other);
    ListAccountPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountPermissionsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
