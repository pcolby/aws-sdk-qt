// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRINCIPALMAPPINGREQUEST_H
#define QTAWS_DELETEPRINCIPALMAPPINGREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DeletePrincipalMappingRequestPrivate;

class QTAWSKENDRA_EXPORT DeletePrincipalMappingRequest : public KendraRequest {

public:
    DeletePrincipalMappingRequest(const DeletePrincipalMappingRequest &other);
    DeletePrincipalMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePrincipalMappingRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
