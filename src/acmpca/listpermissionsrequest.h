// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSREQUEST_H
#define QTAWS_LISTPERMISSIONSREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class ListPermissionsRequestPrivate;

class QTAWSACMPCA_EXPORT ListPermissionsRequest : public AcmPcaRequest {

public:
    ListPermissionsRequest(const ListPermissionsRequest &other);
    ListPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionsRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
