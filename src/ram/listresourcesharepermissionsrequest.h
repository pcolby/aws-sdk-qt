// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESHAREPERMISSIONSREQUEST_H
#define QTAWS_LISTRESOURCESHAREPERMISSIONSREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class ListResourceSharePermissionsRequestPrivate;

class QTAWSRAM_EXPORT ListResourceSharePermissionsRequest : public RamRequest {

public:
    ListResourceSharePermissionsRequest(const ListResourceSharePermissionsRequest &other);
    ListResourceSharePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceSharePermissionsRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
