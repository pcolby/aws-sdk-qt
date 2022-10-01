// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSREQUEST_H
#define QTAWS_LISTPERMISSIONSREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class ListPermissionsRequestPrivate;

class QTAWSRAM_EXPORT ListPermissionsRequest : public RamRequest {

public:
    ListPermissionsRequest(const ListPermissionsRequest &other);
    ListPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionsRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
