/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PUTDATACATALOGENCRYPTIONSETTINGSREQUEST_P_H
#define QTAWS_PUTDATACATALOGENCRYPTIONSETTINGSREQUEST_P_H

#include "gluerequest_p.h"
#include "putdatacatalogencryptionsettingsrequest.h"

namespace QtAws {
namespace Glue {

class PutDataCatalogEncryptionSettingsRequest;

class QTAWS_EXPORT PutDataCatalogEncryptionSettingsRequestPrivate : public GlueRequestPrivate {

public:
    PutDataCatalogEncryptionSettingsRequestPrivate(const GlueRequest::Action action,
                                   PutDataCatalogEncryptionSettingsRequest * const q);
    PutDataCatalogEncryptionSettingsRequestPrivate(const PutDataCatalogEncryptionSettingsRequestPrivate &other,
                                   PutDataCatalogEncryptionSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDataCatalogEncryptionSettingsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
