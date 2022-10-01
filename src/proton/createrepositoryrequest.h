// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPOSITORYREQUEST_H
#define QTAWS_CREATEREPOSITORYREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class CreateRepositoryRequestPrivate;

class QTAWSPROTON_EXPORT CreateRepositoryRequest : public ProtonRequest {

public:
    CreateRepositoryRequest(const CreateRepositoryRequest &other);
    CreateRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRepositoryRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
