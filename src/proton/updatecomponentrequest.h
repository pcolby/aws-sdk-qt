// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTREQUEST_H
#define QTAWS_UPDATECOMPONENTREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class UpdateComponentRequestPrivate;

class QTAWSPROTON_EXPORT UpdateComponentRequest : public ProtonRequest {

public:
    UpdateComponentRequest(const UpdateComponentRequest &other);
    UpdateComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateComponentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
