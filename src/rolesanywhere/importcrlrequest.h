// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCRLREQUEST_H
#define QTAWS_IMPORTCRLREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ImportCrlRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT ImportCrlRequest : public RolesAnywhereRequest {

public:
    ImportCrlRequest(const ImportCrlRequest &other);
    ImportCrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
