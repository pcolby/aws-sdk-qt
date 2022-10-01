// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTREQUEST_H
#define QTAWS_DELETEENVIRONMENTREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentRequestPrivate;

class QTAWSPROTON_EXPORT DeleteEnvironmentRequest : public ProtonRequest {

public:
    DeleteEnvironmentRequest(const DeleteEnvironmentRequest &other);
    DeleteEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
